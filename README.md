# Static C library: libpiscine
This project was created using functions in the C programming language that I developed during the selection process, known as the Piscine, at [Hive Helsinki](https://www.hive.fi/en/studies). Hive is part of the 42 School Network, which emphasizes peer-to-peer learning and the development of skills in creative problem-solving, teamwork, autonomy, responsibility, logic, and rigor. After completing the Piscine, I was selected for the core educational program.

## Functions
This static library includes two standard C libraries: `<unistd.h>`, which provides the `write()` function, and `<stdlib.h>`, which is used for memory management with `malloc()` and `free()`. By including the header file `#include "libpiscine.h"` in your project, you will also have access to its functions.

A list of all the functions included in the Piscine library can be found in the [include/libpiscine.h](https://github.com/ucylama/hive-piscine-c-library/blob/main/include/libpiscine.h) header file. Each function is also accompanied by a short annotation inside its source file.

## Project Structure
```css
hive-piscine-c-library/
│
├── include/
│   └── libpiscine.h
│
├── src/
│   ├── ft_atoi.c
│   ├── ft_is_prime.c
│   ├── ft_putnbr.c
│   ├── ...
│   └── ft_ultimate_range.c
│
├── test/
│   ├── test_main.c         # Test source file
│   └── test_main           # Test program created after compilation
│
├── lib/                    # Directory created after compilation
│   └── libpiscine.a        # Static library file created after compilation
│
├── obj/                    # Directory created after compilation
│   ├── ft_atoi.o           # Object file created after compilation
│   ├── ft_is_prime.o
│   ├── ft_putnbr.o
│   ├── ...
│   └── ft_ultimate_range.o
│
└── Makefile                # Script to automate compilation process
```

## Where to start
### Installation 
To use this library in your project, follow these steps:
1. **Clone the Repository.**
```sh
git clone https://github.com/ucylama/hive-piscine-c-library.git repository-name
cd repository-name
```
2. **Build the Library.**  
Use the Makefile to compile the source files and create the static library.  
This will generate:
    - object files (`ft_*.o`) in the `./obj` directory.
    - a static library file (`libpiscine.a`) in the `./lib` directory.
```sh
make
```
3. **Include the Header File** in your source code.
```c
#include "libpiscine.h"
```
4. **Include the Library in the Project.**  
Link the static library in your project's build process to use the functions as described in the header file. For example, if using `gcc`, you can compile and link your project with the library as follows:
```sh
gcc -Iinclude -o program_name program_name.c -Llib -lpiscine

```  
Flags and arguments:  
- `-Iinclude` tells the compiler to look in the `include` directory for any header files that are included in the source code.  
- `-o program_name` specifies the name of the output file.
- `program_name.c` is the name of the source file to be compiled. 
- `-Llib` tells the linker to look in the lib directory for any libraries that are specified with the `-l` option.
- `-lpiscine` means that the linker should link the program with the `libpiscine.a` library (the lib prefix and the `.a` extension are added automatically by the linker).  

Recommended additional flags:  
- `-Wall -Wextra -Werror` to enable warning messages and to tell the compiler.
- `-std=c99` to use the C99 standard for the C programming language.

### Testing
To test the library and ensure that everything is working correctly, follow these steps:
1. Build the Test Executable.  
Compile the test file test_main.c with the library:
```sh 
make test
```
2. Run the Tests.  
Execute the test binary to run the tests:
```sh
./test/test_main
```

### Clean Up
To clean up the object files, test executable, and library files, run:
```sh
make clean
```
To remove all build artifacts and directories:
```sh
make re
```
### Platform-Specific Settings
The `Makefile` contains settings that are specific to different operating systems. Here’s a brief explanation of these settings:
```makefile
ifeq ($(OS),Windows_NT)     # Checks if the operating system is Windows.
    RM = del /q             # Defines the command to remove files.
    RM_DIR = rmdir /s /q    # Defines the command to remove directories.
    LIB_EXT = .lib          # Sets the library file extension for Windows.
else                        # Applies to Unix-like systems.
    RM = rm -f              # Defines the command to remove files.
    RM_DIR = rm -rf         # Defines the command to remove directories.
    LIB_EXT = .a            # Sets the library file extension.
endif
```
___
Developed by **Julia Persidskaia**.  
[LinkedIn](https://www.linkedin.com/in/iuliia-persidskaia/)