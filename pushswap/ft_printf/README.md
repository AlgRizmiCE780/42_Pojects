*This project has been created as part of the 42 curriculum by fmohamed.*

## Description

`ft_printf` is a custom implementation of the standard C `printf` function. The goal of this project is to gain a deep understanding of variadic functions, formatted output, and low-level I/O operations in C by recreating a widely used standard library function from scratch.

The function supports a subset of the original `printf` format specifiers and handles formatted output by parsing the format string and dispatching each conversion to specialized helper functions.

This project emphasizes:
- Variadic argument handling using `stdarg.h`
- Modular design in C
- Memory safety and robustness
- Clean compilation with strict flags

## Supported Conversions

The implementation supports the following format specifiers:
- `%c` : character
- `%s` : string
- `%p` : pointer address in hexadecimal
- `%d` / `%i` : signed decimal integer
- `%u` : unsigned decimal integer
- `%x` : hexadecimal (lowercase)
- `%X` : hexadecimal (uppercase)
- `%%` : literal percent sign

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will generate a static library:

```
libftprintf.a
```

### Usage

Include the header file and link the library when compiling your program:

```c
#include "ft_printf.h"
```

```bash
gcc main.c libftprintf.a
```

Example:

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```

## Project Structure

- `ft_printf.c` : Core logic and format string parsing
- `ft_print_*.c` : Conversion-specific printing functions
- `ft_put*.c` : Low-level output helpers using `write`
- `ft_strlen.c` : Utility function
- `ft_printf.h` : Public function prototypes
- `Makefile` : Build automation

The project is organized to keep each responsibility isolated, improving readability and maintainability.

## Algorithm and Data Structure Explanation

The core algorithm follows a single-pass parsing strategy over the format string:

1. Iterate character by character through the format string.
2. When a regular character is encountered, write it directly to the output.
3. When a `%` is found, inspect the next character to determine the conversion type.
4. Dispatch the handling of that conversion to a dedicated function (e.g., `ft_print_str`, `ft_print_nbr`).
5. Each conversion function extracts the appropriate argument from the variadic list using `va_arg`.
6. Output is written using the `write` system call, and the number of printed characters is accumulated.

### Justification

- **Single-pass parsing** ensures linear time complexity O(n), where n is the length of the format string.
- **Function dispatch per specifier** keeps the code modular and mirrors how real-world standard libraries are structured.
- **No dynamic data structures** are required; the algorithm relies only on stack variables and simple counters, which reduces complexity and potential memory errors.
- **Recursion for number printing** (used in integer and hexadecimal output) provides a clear and concise way to handle digit order without auxiliary buffers.

This design balances simplicity, clarity, and correctness while staying within the constraints of the project.

## Error Handling and Limitations

- Flags, width, precision, and length modifiers are not handled.
- Behavior is undefined for unsupported format specifiers.
- The function assumes valid input and does not replicate all edge cases of the original `printf`.

These limitations are intentional and aligned with the project scope.

## Resources

### References

- Linux manual: `man 3 printf`
- `stdarg.h` documentation
- GNU C Library documentation
- Kernighan & Ritchie, *The C Programming Language*

### Use of AI

AI tools were used as a learning aid for:
- Understanding variadic functions and format parsing concepts
- Clarifying edge cases and implementation strategies
- Improving documentation clarity

All code was written manually, tested, and validated by the author.

## Author

- **Login:** fmohamed
- **Project:** ft_printf (42 School)

