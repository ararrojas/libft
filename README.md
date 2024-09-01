# Libft

Libft is a custom library written in C that contains a set of standard functions from the C library along with some additional utility functions useful for developing C projects. This project is part of the 42 programming school's curriculum and aims to reinforce knowledge of basic C language concepts, memory management, and the implementation of simple data structures.

## Features

- Reimplementation of standard C library functions (`string.h`, `stdlib.h`, etc.).
- Auxiliary functions for manipulating strings, memory, and linked lists.
- Basic implementation of data structures such as linked lists and related operations.

## Project Structure

The repository is organized as follows:

```bash
.
├── *.h              # Header files -> libft.h | ft_printf.h | get_next_line.h
├── *.c              # Source files
├── Makefile         # Script to compile the library
├── README.md        # This file
└── libft.a          # Compiled library (generated after running 'make')
```

## Installation

To compile the library and generate the libft.a file, follow these steps:

### Clone this repository:

```bash
git clone https://github.com/ararrojas/libft.git
cd libft
```

### Compile the library:
```bash
make
```

### Usage
Once you have compiled the library, you can use it in your own projects as follows:

Include header files in your code:
```c
#include "libft.h"
#include "ft_print.h"
#include "get_next_line.h"
```

### Start using the functions :)
For example:
```bash
gcc yourmain.c libft.a
```

