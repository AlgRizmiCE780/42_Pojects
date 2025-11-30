# 42_Pojects
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 13:00:43 by fmohamed          #+#    #+#              #
#    Updated: 2025/11/20 13:03:15 by fmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

------------------_________Libft_________------------------

Libft is a custom C library recreating a selection of standard C library functions, along with additional utilities commonly needed throughout the 42 curriculum. It forms the foundation for future projects such as ft_printf, get_next_line, Minishell, and many others.

## Overview

The purpose of this project is to understand low-level memory manipulation, string handling, data structures, and algorithmic reasoning by reimplementing standard-library behavior from scratch. The library includes:

- Standard C library functions (memory, strings, conversions, character checks)
- Additional helper utilities
- A complete linked-list implementation (bonus)

## Functions Documentation

All functions required by the project are documented below.

## ::::::::: Part 1 — Libc Functions :::::::::

### _________Memory_________

#### ft_memset
Fills a block of memory with a specific byte value.

#### ft_bzero
Sets a block of memory to all zero bytes.

#### ft_memcpy
Copies a block of memory from source to destination. Not safe for overlapping regions.

#### ft_memmove
Copies memory safely even when source and destination overlap.

#### ft_memchr
Searches for the first occurrence of a byte in a memory area.

#### ft_memcmp
Compares two memory areas byte-by-byte.

### _________Strings_________

#### ft_strlen
Returns the length of a C-string, stopping at the null terminator.

#### ft_strlcpy
Copies a string into a destination buffer with size protection, always null-terminating.

#### ft_strlcat
Appends a string to an existing buffer without exceeding buffer size.

#### ft_strchr
Finds the first occurrence of a character in a string.

#### ft_strrchr
Finds the last occurrence of a character in a string.

#### ft_strncmp
Compares two strings up to n characters.

#### ft_strnstr
Searches for a substring within a limited number of characters.

#### ft_strdup
Allocates and returns a newly copied version of a string.

### ____________Character Checks____________

#### ft_isalpha
Checks if the input is an alphabetical character (A–Z or a–z).

#### ft_isdigit
Checks if the character is a numeric digit (0–9).

#### ft_isalnum
Checks if the character is alphanumeric (letter or digit).

#### ft_isascii
Checks if the value fits into the ASCII range (0–127).

#### ft_isprint
Checks if the character is printable (32–126).

#### ft_toupper
Converts lowercase letters to uppercase.

#### ft_tolower
Converts uppercase letters to lowercase.

### _____________Conversions______________

#### ft_atoi
Converts a C-string into an integer, skipping whitespace and handling signs.

#### ft_itoa
Converts an integer into a newly allocated string representation.

### _____________Memory Allocation___________

#### ft_calloc
Allocates memory for an array and initializes all bytes to zero.

## ::::::::: Part 2 — Additional Functions :::::::::

#### ft_substr
Creates a substring starting at an index for a given length.

#### ft_strjoin
Concatenates two strings into one newly allocated string.

#### ft_strtrim
Removes all characters from the beginning and end of a string that are found in a given set.

#### ft_split
Splits a string into an array of substrings separated by a specific delimiter.

#### ft_strmapi
Applies a function to each character of a string and returns a new modified string.

#### ft_striteri
Applies a function to each character of a string in-place (modifiable).

#### ft_putchar_fd
Writes a single character to a file descriptor.

#### ft_putstr_fd
Writes a string to a file descriptor.

#### ft_putendl_fd
Writes a string followed by a newline to a file descriptor.

#### ft_putnbr_fd
Writes an integer number to a file descriptor.

## ::::::::: Bonus — Linked List Functions :::::::::

#### ft_lstnew
Creates a new list node containing the provided content.

#### ft_lstadd_front
Adds a new node to the beginning of a list.

#### ft_lstadd_back
Adds a new node to the end of a list.

#### ft_lstlast
Finds the last node in a linked list.

#### ft_lstsize
Counts the number of nodes in the list.

#### ft_lstdelone
Deletes a single list node using a user-provided delete function.

#### ft_lstclear
Deletes every node in the list and frees all content.

#### ft_lstiter
Iterates through the list and applies a function to each node's content.

#### ft_lstmap
Creates a new list by applying a function to each node; cleans up if allocation fails.

## Compilation

Use `make` to compile the library.

## Usage Example

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strdup("Hello, Libft!");
    ft_putendl_fd(s, 1);
    free(s);
    return 0;
}
