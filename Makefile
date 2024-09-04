# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -Iinclude
AR = ar
ARFLAGS = rcs

# Platform-specific settings
ifeq ($(OS),Windows_NT)
    RM = del /q
    RM_DIR = rmdir /s /q
    LIB_EXT = .lib
else
    RM = rm -f
    RM_DIR = rm -rf
    LIB_EXT = .a
endif

# Directories
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
TST_DIR = test

# File names
LIBNAME = libpiscine$(LIB_EXT)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
TST_EXEC = $(TST_DIR)/test_main


# Targets
all: $(LIB_DIR)/$(LIBNAME)

# Create the static library
$(LIB_DIR)/$(LIBNAME): $(OBJ_FILES)
	@mkdir -p $(LIB_DIR)
	$(AR) $(ARFLAGS) $@ $(OBJ_FILES)
	@echo "\nLibrary $(LIBNAME) created.\n"

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@"

# Test library with test_main.c
test: $(LIB_DIR)/$(LIBNAME)
	@if [ ! -f $(TST_EXEC) ]; then \
		echo "Building test execution file"; \
		$(CC) $(CFLAGS) -o $(TST_EXEC) $(TST_DIR)/test_main.c -L$(LIB_DIR) -lpiscine; \
		echo "READY.\n\nRun test/test_main\n"; \
	else \
		echo "Test executable already exists. Skipping build."; \
	fi

# Clean up object files
clean:
	@$(RM) $(OBJ_FILES) $(TST_EXEC)
	@echo "Cleaned up object files."

# Clean up object files and their directory
re: clean
	@$(RM_DIR) $(OBJ_DIR) $(LIB_DIR)
	@echo "Cleaned up object and library directories."

# Phony targets
.PHONY: all clean re test
