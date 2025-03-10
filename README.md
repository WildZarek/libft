<div align="center" style="text-decoration: none;">
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/projects/libft-light.png#gh-light-mode-only" alt="Banner (claro)" />
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/projects/libft-dark.png#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
    This project aims to redo in C a library of usual functions that can be used on the next projects of 42.
    <br><br>
    <a href='https://profile.intra.42.fr/users/dsarmien' target="_blank" style="text-decoration: none;">
        <img alt='42 Málaga' src='https://img.shields.io/badge/Málaga-black?style=for-the-badge&logo=42&logoColor=white'/>
    </a>
    <a href='https://projects.intra.42.fr/42cursus-libft/dsarmien' target="_blank"><img src="https://img.shields.io/badge/125%20%2F%20100-success?style=for-the-badge&label=SUCCESS&labelColor=%23424242&color=%23DACE28" /></a>
    <img src="https://api.visitorbadge.io/api/visitors?user=WildZarek&repo=libft&label=VISITORS&labelColor=%23424242&countColor=%23dace28&labelStyle=upper"/>
  
</div>

---

# libft

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
- If you need helper functions to break down a more complex function, define them
as `static` functions to restrict their scope to the appropriate file.
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
