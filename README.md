# ft_printf - 42 Project

## Introduction

The ft_printf project at 42 is designed to help students understand formatted output functions by implementing their own version of the standard printf function. This project teaches handling variable arguments, formatted output, and efficient memory management.

## Concept

The goal of ft_printf is to create a function that mimics the behavior of printf from the C Standard Library. It must correctly format and print different types of data while handling variable arguments efficiently.

## Mandatory Requirements

### Function Prototype

```int ft_printf(const char *format, ...);```

  - Supported Format Specifiers

  - ```%c``` -> Print a character

  - ```%s``` -> Print a string

  - ```%p``` -> Print a pointer address in hexadecimal format

  - ```%d``` and ```%i``` -> Print a signed decimal integer

  - ```%u``` -> Print an unsigned decimal integer

  - ```%x``` and ```%X``` -> Print a number in hexadecimal (lowercase and uppercase)

  - ```%%``` -> Print a percent sign

### Constraints

  - The function must use ```write``` for output instead of standard ```printf``` functions.

  - No use of standard library functions like ```printf```, ```sprintf```, or ```fprintf```.

## Bonus Features

  - The bonus part extends the project with:

  - Support for the ```#```, ```0```, ```-```, ```+```, and space flags.

  - Handling of field width and precision.

  - Support for length modifiers like ```l``` and ```h```.

## Implementation Details

### Variadic Arguments

  - The function uses ```stdarg.h``` to handle a variable number of arguments.

  - The ```va_list``` type is used to iterate through arguments dynamically.

### Buffer Management

  - Properly handling formatted output to ensure efficiency and correctness.

  - Avoiding unnecessary memory allocations to optimize performance.

### Conversion Specifiers

  - Implementing each specifier separately while maintaining modularity.

  - Handling edge cases such as ```NULL``` strings, negative numbers, and large values.

## Compilation and Usage

To compile the project, use:

```console
cc -Wall -Wextra -Werror ft_printf.c ft_printf_utils.c -o ft_printf
```

To test the function:

```console
./ft_printf "Hello %s! Your score is %d." "User" 42
```

## Common Pitfalls

  - $\color{crimson}{\textbf{Not handling}}$ ```NULL``` cases properly for pointers and strings.

  - $\color{crimson}{\textbf{Incorrect formatting}}$ when dealing with unsigned integers.

  - $\color{crimson}{\textbf{Buffer overflow}}$ due to improper string manipulation.

  - $\color{crimson}{\textbf{Not managing}}$ ```va_list``` correctly leading to segmentation faults.

## Conclusion

The ft_printf project is a crucial step in mastering formatted output and variadic functions in C. Successfully implementing it improves problem-solving skills and deepens understanding of low-level formatting operations.


