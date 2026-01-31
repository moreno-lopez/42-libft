*This project has been created as part of the 42 curriculum by horarivo.*

# Libft

## Description
The **Libft** project is my very first project at 42. Its goal is to recreate several standard C library functions from scratch, along with some additional utility functions.

Since the use of standard functions is often restricted in our projects, this library will serve as my own personal "toolbox." By coding these myself, I have gained a deeper understanding of how memory, strings, and pointers work in C.

## Function Overview
Here is the complete list of functions I implemented, organized by category.

### 1. Libc Functions
*Re-implementation of standard C library functions.*

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks if a character is alphabetic. |
| `ft_isdigit` | Checks if a character is a digit (0-9). |
| `ft_isalnum` | Checks if a character is alphanumeric. |
| `ft_isascii` | Checks if a character fits in the ASCII table. |
| `ft_isprint` | Checks if a character is printable. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills a block of memory with a specific byte. |
| `ft_bzero` | Sets a block of memory to zero. |
| `ft_memcpy` | Copies memory area (non-overlapping). |
| `ft_memmove` | Copies memory area (handles overlapping). |
| `ft_strlcpy` | Copies a string with size protection. |
| `ft_strlcat` | Concatenates strings with size protection. |
| `ft_toupper` | Converts a character to uppercase. |
| `ft_tolower` | Converts a character to lowercase. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to n characters. |
| `ft_memchr` | Scans memory for a specific character. |
| `ft_memcmp` | Compares two memory blocks. |
| `ft_strnstr` | Locates a substring in a string. |
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory and initializes it to zero. |
| `ft_strdup` | Creates a duplicate of a string. |

### 2. Additional Functions
*Useful tools not included in the standard libc.*

| Function | Description |
| :--- | :--- |
| `ft_substr` | Extracts a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Trims specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character of a string (creating a new string). |
| `ft_striteri` | Applies a function to each character of a string (in place). |
| `ft_putchar_fd` | Outputs a character to a file descriptor. |
| `ft_putstr_fd` | Outputs a string to a file descriptor. |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor. |

### 3. Linked List Functions (Mandatory)
*Functions to manipulate dynamic data structures.*

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node to the end of the list. |
| `ft_lstdelone` | Deletes a single node using a custom function. |
| `ft_lstclear` | Deletes and frees a node and all its successors. |
| `ft_lstiter` | Iterates through the list and applies a function to its content. |
| `ft_lstmap` | Iterates and applies a function to create a new list. |



## Instructions

### Compilation
The project includes a **Makefile** to automate the build process.

* `make` : Compiles the library `libft.a`.
* `make clean` : Removes object files (`.o`).
* `make fclean` : Removes object files and the library.
* `make re` : Forces a full re-compilation.

### Usage
To use this library in your own project, include the header and link the `.a` file:
1. `#include "libft.h"`
2. `cc main.c -L. -lft` (where `-lft` links `libft.a` and `-L.` specifies the current directory).

## Resources

#### References
* **Man pages:** Used to understand the strict behavior and edge cases of libc functions.
* **42 Norm:** All code follows the school's coding standard.

#### Use of AI
AI (Gemini) was used as a support tool to aid in the analysis and understanding of the project’s underlying logic : 
* **Valgrind Debugging:** The AI helped me interpret Valgrind error messages, such as "Invalid read" or "Conditional jump," allowing me to identify where I was missing NULL pointer protections or failing to free memory.
* **Complex Logic:** It helped me visualize the ciplexity in `ft_lstmap` logic
