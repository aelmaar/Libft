# Libft - Your Very First Own Library

Libft is a C library project developed as part of the 42 School curriculum. This library contains a collection of general-purpose functions that mimic some of the standard library functions in C and provides additional utility functions for string manipulation, memory management, and linked list operations.

## Project Overview

The goal of this project is to create a custom C library that can be used in various programming tasks. The library is divided into two parts: the mandatory part and the bonus part. The mandatory part consists of essential functions, while the bonus part includes additional functions related to linked lists.

## Mandatory Part Functions

Here is a list of the functions included in the mandatory part:

| Function      | Description                                          |
| ------------- | ---------------------------------------------------- |
| `ft_isalpha`  | Checks if a character is alphabetic.                |
| `ft_isdigit`  | Checks if a character is a digit.                   |
| `ft_isalnum`  | Checks if a character is alphanumeric.              |
| `ft_isascii`  | Checks if a character is an ASCII character.        |
| `ft_isprint`  | Checks if a character is a printable character.     |
| `ft_toupper`  | Converts a lowercase character to uppercase.       |
| `ft_tolower`  | Converts an uppercase character to lowercase.       |
| `ft_strlen`   | Counts the length of a string.                      |
| `ft_strchr`   | Locates the first occurrence of a character.        |
| `ft_strrchr`  | Locates the last occurrence of a character.         |
| `ft_strnstr`  | Locates the first occurrence of a string with a limited length. |
| `ft_strncmp`  | Compares two strings with a limited length.         |
| `ft_strlcpy`  | Copies a source string to a destination string.    |
| `ft_strlcat`  | Concatenates a source string to a destination string.|
| `ft_atoi`     | Converts a string to an integer.                   |
| `ft_bzero`    | Writes zeroed bytes to a string.                   |
| `ft_memset`   | Writes specified bytes of a value to a string.     |
| `ft_memcpy`   | Copies bytes from one memory area to another.      |
| `ft_memmove`  | Copies bytes with overlap handling.                |
| `ft_memcmp`   | Compares bytes of two strings.                     |
| `ft_memchr`   | Locates the first occurrence of a byte.            |
| `ft_calloc`   | Dynamically allocates memory with zeroed bytes.    |
| `ft_strdup`   | Dynamically allocates memory for a copy of a string.|
| `ft_substr`   | Creates a substring from a string.                 |
| `ft_strjoin`  | Creates a new string by concatenating two strings.  |
| `ft_strtrim`  | Creates a new string by trimming characters from the beginning and end. |
| `ft_split`    | Creates an array of strings by splitting a string using a delimiter. |
| `ft_itoa`     | Converts an integer to a string.                  |
| `ft_strmapi`  | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character with an index. |
| `ft_putchar_fd` | Outputs a character to a file descriptor.      |
| `ft_putstr_fd` | Outputs a string to a file descriptor.          |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor.        |

## Bonus Part Functions

The bonus part includes functions for working with linked lists. These functions are not mandatory but can be useful in various programming tasks.

| Function      | Description                                          |
| ------------- | ---------------------------------------------------- |
| `ft_lstnew`   | Creates a new node in the linked list.              |
| `ft_lstadd_front` | Adds a new node to the beginning of the linked list. |
| `ft_lstadd_back`  | Adds a new node to the end of the linked list.       |
| `ft_lstsize`  | Counts the number of nodes in the linked list.       |
| `ft_lstlast`  | Returns the last node of the linked list.            |
| `ft_lstdelone` | Deletes a node and its content from the linked list. |
| `ft_lstclear` | Deletes all nodes in the linked list and frees memory. |
| `ft_lstiter`  | Iterates through the linked list and applies a function to each node's content. |
| `ft_lstmap`   | Iterates through the linked list and applies a function to each node's content, creating a new list. |

## How to Use

To use this library in your C projects, follow these steps:

1. Clone this repository to your local machine.
2. Compile the `libft.a` library using the provided Makefile.
3. Include the `libft.h` header file in your C code.
4. Link your program with the `libft.a` library during compilation.

Example compilation command:
```bash
gcc -o my_program my_program.c -L. -lft
