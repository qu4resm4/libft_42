*This project was developed as part of the 42 School curriculum by gquaresm.*

# Libft

## Description

**Libft** is the first foundational project of the 42 curriculum. Its goal is to recreate a subset of the C standard library while developing a deeper understanding of memory management, string manipulation, data structures, and low-level programming concepts.

Instead of relying on existing implementations, each function is written from scratch, allowing students to understand how common library functions work internally and to build a reusable library that will serve as the foundation for future projects.

The resulting static library can be linked into other C projects developed throughout the curriculum.

Beyond recreating standard library functions, this project represents my very first library as a developer. Through its implementation, I gained a practical understanding of input validation, error handling, memory allocation and management, and the complete C compilation process—from source code to object files, static libraries, and executable programs.

---

## Part 1 — Libc Functions

The first part of the project consists of reimplementing a set of standard C library functions:

### Character Classification

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`

### String Functions

* `ft_strlen`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strdup`

### Memory Functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### Conversion Functions

* `ft_atoi`

### Character Conversion

* `ft_toupper`
* `ft_tolower`

Functions requiring dynamic memory allocation are implemented using `malloc()`:

* `ft_calloc`
* `ft_strdup`

---

## Part 2 — Additional Functions

The second part introduces utility functions that are not part of the standard C library but are frequently useful in later projects:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

---

## Bonus — Linked List Functions

The bonus section introduces a simple singly linked list implementation and related operations.

### Implemented

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`

### Not Yet Implemented

* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

# Build Instructions

Compile the static library using:

```bash
make
```

The Makefile is organized to avoid unnecessary recompilation by generating object files (`.o`) separately before creating the final library.

### Compilation Process

1. Source files (`.c`) are compiled into object files (`.o`) using:

```bash
cc
```

2. Object files are archived into a static library using:

```bash
ar
```

The final output is:

```bash
libft.a
```

### Cleaning Build Files

Remove object files:

```bash
make clean
```

Remove object files and the generated library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

---

## Using the Library

To use the library in another project, compile and link `libft.a` together with your source files:

```bash
cc main.c libft.a -o program
```

If a header file is provided, include it in your source code:

```c
#include "libft.h"
```

---

# Resources

## Understanding the C Compilation Process

One of the most valuable resources used during this project was the following article, which clearly explains each stage of the C compilation pipeline, from preprocessing to linking:

* [Makefiles - Universidade Federal do Paraná](https://www.inf.ufpr.br/hexsel/ci067/15_make.html)

The compilation flow illustrated below was particularly helpful for understanding how source files become executables and how static libraries fit into the process:

![C Compilation Process](https://www.inf.ufpr.br/hexsel/ci064/pics/compilacao.png)

## References

The primary reference for each implementation was the corresponding manual page:

```bash
man <function_name>
```

Examples:

```bash
man strlen
man memcpy
man atoi
```
> **RTFM!!!**

## Testing

The project was validated using the excellent community tester:

* [Tripouille's Libft Tester](https://github.com/Tripouille/libftTester)

This tester was used to verify correctness, edge cases, and compatibility with the expected behavior of the original library functions.
