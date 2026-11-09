*This project has been created as part of the 42 curriculum by [molatif].*

# Libft

## Description

Libft is the first project of the 42 curriculum. The goal is to build your own C library (`libft.a`) by re-implementing a set of standard C library functions, plus some extra utility functions. The library is then reused in later 42 projects.

The project helps you understand how these functions work internally, and gives you practice with pointers, memory management (`malloc`/`free`), strings, linked lists, and writing a `Makefile`.

## Instructions

### Compilation

Clone the repository, then run these commands from its root:

```bash
make          # builds libft.a (mandatory part)
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + make
```

The code is compiled with `cc -Wall -Wextra -Werror`.

### Usage

Include the header in your code:

```c
#include "libft.h"
```

Then compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Library content

### Part 1: Libc functions

Re-implementations of standard functions, with the same prototypes and behavior as the originals.

| Category | Functions |
|----------|-----------|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2: Additional functions

Functions that are not in libc, or that exist in a different form.

| Function | Description |
|----------|-------------|
| `ft_substr` | Returns a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Trims given characters from the start and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character and returns the new string. |
| `ft_striteri` | Applies a function to each character (with its index) in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3: Linked lists

Functions to manipulate lists made of `t_list` nodes:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Resources

- Linux manual pages (`man 3 <function>`) for the behavior of each libc function
- [C reference (cppreference)](https://en.cppreference.com/w/c)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- Peer discussions and peer evaluations at 42

### Use of AI

AI was used as a support tool only (for example to explain concepts such as `memmove` overlap handling or Makefile syntax). All the code in the library was written, tested, and understood by me.
