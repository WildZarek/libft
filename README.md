<div align="center" style="text-decoration: none;">
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/projects/libft-light.png#gh-light-mode-only" alt="Banner (claro)" />
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/projects/libft-dark.png#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
    This project aims to redo in C a library of usual functions that can be used on the next projects of 42.
    <br><br>
    <a href='https://profile.intra.42.fr/users/dsarmien' target="_blank" style="text-decoration: none;">
        <img alt='42 Málaga' src='https://img.shields.io/badge/Málaga-black?style=for-the-badge&logo=42&logoColor=white'/>
    </a>
    <img src="https://img.shields.io/badge/125%20%2F%20100-success?style=for-the-badge&label=SUCCESS&labelColor=%23424242&color=%23DACE28" />
    <img src="https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2FWildZarek%2Flibft&label=VISITORS&labelColor=%23424242&countColor=%23dace28&labelStyle=upper"/>
  
</div>

---

# <a href='https://projects.intra.42.fr/42cursus-libft/dsarmien' target="_blank">libft</a>

## Mandatory Part

<table>
  <tr>
    <th>Program Name</th>
    <td><em>libft.a</em></td>
  </tr>
  <tr>
    <th>Turn in files</th>
    <td>Makefile, <code>libft.h</code>, <code>ft_*.c</code></td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><em>NAME</em>, <em>all</em>, <em>clean</em>, <em>fclean</em>, <em>re</em></td>
  </tr>
  <tr>
    <th>External functs.</th>
    <td><code>write()</code>, <code>malloc()</code>, <code>free()</code></td>
  </tr>
  <tr>
    <th>Description</th>
    <td>Create your own library: a collection of functions that will serve as a useful tool throughout your cursus.</td>
  </tr>
</table>

## Technical considerations

- Declaring global variables is strictly forbidden.
- If you need helper functions to break down a more complex function,<br>
  define them as `static` functions to restrict their scope to the appropriate file.
- All files must be placed at the root of your repository.
- All files must be placed at the root of your repository.
- Every `.c` file must compile with the following *flags*: `-Wall -Werror -Wextra`.
- You must use the `ar` command to create your library. The use of `libtool` is strictly
forbidden.
- Your `libft.a` must be created at the root of your repository.

## Part 1 - *Libc* functions

To begin, you must reimplement a set of functions from the *libc*.

Your version will have the same prototypes and behaviors as the originals, adhering strictly to their definitions in the `man` page. The only difference will be their names, as they must start with the `ft_` prefix.

No authorized functions required:

<table>
  <tr>
    <td><code>isalpha()</code></td>
    <td><code>isdigit()</code></td>
    <td><code>isalnum()</code></td>
  </tr>
  <tr>
    <td><code>isascii()</code></td>
    <td><code>isprint()</code></td>
    <td><code>strlen()</code></td>
  </tr>
  <tr>
    <td><code>memset()</code></td>
    <td><code>bzero()</code></td>
    <td><code>memcpy()</code></td>
  </tr>
  <tr>
    <td><code>memmove()</code></td>
    <td><code>strlcpy()</code></td>
    <td><code>strlcat()</code></td>
  </tr>
  <tr>
    <td><code>toupper()</code></td>
    <td><code>tolower()</code></td>
    <td><code>strchr()</code></td>
  </tr>
  <tr>
    <td><code>strrchr()</code></td>
    <td><code>strncmp()</code></td>
    <td><code>memchr()</code></td>
  </tr>
  <tr>
    <td><code>memcmp()</code></td>
    <td><code>strnstr()</code></td>
    <td><code>atoi()</code></td>
  </tr>
</table>

Require the use of `malloc()`:

<table>
    <tr>
        <td><code>calloc()</code></td>
        <td><code>strdup()</code></td>
    </tr>
</table>

## Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not included in
the **libc**, or exist in a different form.

<table>
  <tr>
    <th>Function name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><code>ft_substr()</code></td>
    <td>Generate a substring from another string.</td>
  </tr>
  <tr>
    <td><code>ft_strjoin()</code></td>
    <td>Generate a string as a result of concatenating 2 strings.</td>
  </tr>
  <tr>
    <td><code>ft_strtrim()</code></td>
    <td>Removes all characters of a string, from a character set, until a character not belonging to that character set is found.</td>
  </tr>
  <tr>
    <td><code>ft_split()</code></td>
    <td>Generate an array of strings resulting from split a string into substrings using a character as delimiter.</td>
  </tr>
  <tr>
    <td><code>ft_itoa()</code></td>
    <td>Generates a string representing the value of the integer received as argument.</td>
  </tr>
  <tr>
    <td><code>ft_strmapi()</code></td>
    <td>Applies a function to each character in a string.</td>
  </tr>
  <tr>
    <td><code>ft_striteri()</code></td>
    <td>Applies a function to each character in a string with the index of the character.</td>
  </tr>
  <tr>
    <td><code>ft_putchar_fd()</code></td>
    <td>Prints a character in a specific file descriptor.</td>
  </tr>
  <tr>
    <td><code>ft_putstr_fd()</code></td>
    <td>Prints a string in a specific file descriptor.</td>
  </tr>
  <tr>
    <td><code>ft_putendl_fd()</code></td>
    <td>Prints a string in a specific file descriptor, followed by a newline character.</td>
  </tr>
  <tr>
    <td><code>ft_putnbr_fd()</code></td>
    <td>Prints an integer in a specific file descriptor.</td>
  </tr>
</table>

# Bonus part

Memory and string manipulation functions are useful...<br>
But you will soon discover that manipulating lists is even more useful.

You have to use the following structure to represent a node of your list.

Add its declaration to your `libft.h` file:

```c
typedef struct s_list
{
void            *content;
struct s_list   *next;
}               t_list;
```

The members of the t_list struct are:

- `content`: The data contained in the node.<br>
   Using void * allows storing any kind of data.
- `next`: The address of the next node, or NULL if the next node is the last one.

Implements the following functions to manipulate lists:

<table>
  <tr>
    <th>Function name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><code>ft_lstnew()</code></td>
    <td>Creates a new node with the indicated content and with <code>next</code> pointing to <code>NULL</code>.</td>
  </tr>
  <tr>
    <td><code>ft_lstadd_front()</code></td>
    <td>Adds a new node to the top of a list.</td>
  </tr>
  <tr>
    <td><code>ft_lstsize()</code></td>
    <td>Counts the number of nodes in a list.</td>
  </tr>
  <tr>
    <td><code>ft_lstlast()</code></td>
    <td>Searches for the last node in the list.</td>
  </tr>
  <tr>
    <td><code>ft_lstadd_back()</code></td>
    <td>Adds a new node to the end of a list.</td>
  </tr>
  <tr>
    <td><code>ft_lstdelone()</code></td>
    <td>Removes a node from a list.</td>
  </tr>
  <tr>
    <td><code>ft_lstclear()</code></td>
    <td>Deletes an entire list.</td>
  </tr>
  <tr>
    <td><code>ft_lstiter()</code></td>
    <td>Iterate over the list and applies a function to the contents of each node.</td>
  </tr>
  <tr>
    <td><code>ft_lstmap()</code></td>
    <td>Iterate over the list and applies a function to the contents of each node.</td>
  </tr>
</table>