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

# File names
LIBNAME = libpiscine$(LIB_EXT)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Targets
all: $(LIB_DIR)/$(LIBNAME)

# Create the static library
$(LIB_DIR)/$(LIBNAME): $(OBJ_FILES)
	@mkdir -p $(LIB_DIR)
	$(AR) $(ARFLAGS) $@ $(OBJ_FILES)
	@echo "Library $(LIBNAME) created."

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@"

# Clean up object files
clean:
	@$(RM) $(OBJ_FILES)
	@echo "Cleaned up object files."

# Clean up object files and their directory
re: clean
	@$(RM_DIR) $(OBJ_DIR) $(LIB_DIR)
	@echo "Cleaned up object and library directories."

# Phony targets
.PHONY: all clean re
