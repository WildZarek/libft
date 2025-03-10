/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:51:05 by dsarmien          #+#    #+#             */
/*   Updated: 2024/10/17 14:10:38 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* INCLUDES */
# include <stdlib.h> // for size_t usage
# include <unistd.h> // for write usage

/* STRUCTURE */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* MANDATORY PROTOTYPES */

/**
 * @brief Checks if the given character is an alphabetic character.
 * @param c The character to check.
 * @return (1 if the character is an alphabetic character); 0 otherwise.
 */
int					ft_isalpha(int c);

/**
 * @brief Checks if the given character is a digit.
 * @param c The character to check.
 * @return (1 if the character is a digit); 0 otherwise.
 */
int					ft_isdigit(int c);

/**
 * @brief Checks if the given character is an alphanumeric character.
 * @param c The character to check.
 * @return (1 if the character is an alphanumeric character); 0 otherwise.
 */
int					ft_isalnum(int c);

/**
 * @brief Checks if the given character is an ASCII character.
 * @param c The character to check.
 * @return (1 if the character is an ASCII character); 0 otherwise.
 */
int					ft_isascii(int c);

/**
 * @brief Checks if the given character is a printable character.
 * @param c The character to check.
 * @return (1 if the character is a printable character); 0 otherwise.
 */
int					ft_isprint(int c);

/**
 * @brief Calculate the length of the given string.
 * @param s The string to calculate the length of.
 * @return The length of the string 's'.
 */
size_t				ft_strlen(const char *s);

/**
 * @brief Fills the first 'n' bytes of the memory block pointed to by 's'
 *        with the constant byte 'c'.
 * @param s The memory block to be filled.
 * @param c The constant byte value to fill the memory block with.
 * @param n The number of bytes to fill.
 * @return The memory block pointed by 's'.
 */
void				*ft_memset(void *s, int c, size_t n);

/**
 * @brief Fills a memory block with zeroes.
 * @param s The memory block to be filled.
 * @param n The number of bytes to fill.
 */
void				ft_bzero(void *s, size_t n);

/**
 * @brief Copies 'n' bytes from memory area 'src' to memory area 'dest'.
 *        The memory areas must not overlap:
 *        use ft_memmove() if the memory areas do overlap.
 * @param dest The destination memory block to be copied in.
 * @param src The source memory block.
 * @param n The number of bytes to copy.
 * @return Pointer to 'dest'.
 */
void				*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies 'n' bytes from memory area 'src' to memory area 'dest'.
 *        The memory areas may overlap: copying takes place as though the
 *        bytes in 'src' are first copied into a temporary array that does not
 *        overlap 'src' or 'dest', and the bytes are then copied from the
 *        temporary array to 'dest'.
 * @param dest The destination memory block.
 * @param src The source memory block.
 * @param n The number of bytes to copy.
 * @return Original value of 'dest'.
 */
void				*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Copies up to 'size - 1' characters from the null-terminated string
 *        'src' to 'dst' and null-terminating the result.
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of 'dst' string.
 * @return The total length of the string 'src'.
 */
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Appends the null-terminated string 'str' to the end of 'dst'.
 *        It will append at most 'size - ft_strlen(dst) - 1' bytes,
 *        null-terminating the result.
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of 'dst' string.
 * @return The total length of the string it tried to create.
 */
size_t				ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Converts the character 'c' to its corresponding uppercase character.
 * @param c The character to convert.
 * @return The corresponding uppercase character if 'c' is a lowercase letter.
 */
int					ft_toupper(int c);

/**
 * @brief Converts the character 'c' to its corresponding lowercase character.
 * @param c The character to convert.
 * @return The corresponding lowercase character if 'c' is an uppercase letter.
 */
int					ft_tolower(int c);

/**
 * @brief Searches for the first occurrence of character 'c' in the string 's'.
 * @param s The string to search in.
 * @param c The character to search for.
 * @return Pointer to the located character in the string 's'.
 */
char				*ft_strchr(const char *s, int c);

/**
 * @brief Searches for the last occurrence of character 'c' in the string 's'.
 * @param s The string to search in.
 * @param c The character to search for.
 * @return Pointer to the located character in the string 's'.
 */
char				*ft_strrchr(const char *s, int c);

/**
 * @brief Compares the two strings 's1' and 's2'.
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return (0 if the strings are equal);
 *         a negative value if 's1' is less than 's2';
 *         a positive value if 's1' is greater than 's2'.
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Scans the initial 'n' bytes of the memory area pointed to by 's'
 *        for the first instance of 'c' (converted to unsigned char).
 * @param s Memory area (string) to be searched.
 * @param c Character to be located.
 * @param n Bytes to be scanned.
 * @return (Pointer to the matching byte);
 *         NULL if the character does not occur in the given memory area.
 */
void				*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares the first 'n' bytes of memory areas 's1' and 's2'.
 * @param s1 Pointer to the first byte string.
 * @param s2 Pointer to the second byte string.
 * @param n Number of bytes to compare.
 * @return (0 if the memory areas are equal);
 *         a negative value if 's1' is less than 's2';
 *         a positive value if 's1' is greater than 's2'.
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Locates the first occurrence of the null-terminated string 'little'
 *        in the string 'big', searching not more than 'len' characters.
 *
 *        Characters that appears after the null-terminated are not searched.
 * @param big The string containing the sequence of characters to match.
 * @param little The string to be searched.
 * @param len The maximum characters to be searched.
 * @return (Pointer to the beginning of the located substring);
 *         NULL if the substring is not found.
 */
char				*ft_strnstr(const char *big, const char *little,
						size_t len);

/**
 * @brief Converts the initial portion of the string
 * 		  pointed to by 'str' to an integer.
 * @param str The string to convert.
 * @return The converted integer value.
 */
int					ft_atoi(const char *str);

/**
 * @brief Allocates memory for an array of elements of 'size' bytes.
 * 		  Memory is set to zero.
 * @param nmemb The number of elements.
 * @param size The size of each element.
 * @return Pointer to the allocated memory.
 */
void				*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief Duplicates a string.
 * @param s The string to be duplicated.
 * @return Pointer to the duplicated string.
 */
char				*ft_strdup(const char *s);

/* ADDITIONAL PROTOTYPES */

/**
 * @brief Allocates memory and returns a substring from the initial string 's'.
 *
 * 		 The substring begins at index 'start' and is of maximum size 'len'.
 * @param s The string from which to create the substring.
 * @param start The index from where to start creating the substring from 's.
 * @param len The maximum length of the substring.
 * @return The substring or NULL if the memory allocation fails.
 */
char				*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates memory and returns a new string,
 *        resulting from the concatenation of string 's2' to 's1'.
 * @param s1 The first string.
 * @param s2 The string to be added to 's1'.
 * @return The new string or NULL if the memory allocation fails.
 */
char				*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Removes all characters from the string 'set' at the
 * 		  beginning and from the end of 's1' string.
 *        Ignores characters in middle.
 * @param s1 The string to be trimmed.
 * @param set The characters to be removed from the string 's1.
 * @return The string trimmed or NULL if the memory allocation fails.
 */
char				*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Splits a string into an array of strings using the character 'c'
 * 		  as delimiter.
 * @param s The string to be splitted.
 * @param c The delimiter character.
 * @return Pointer to the array of strings. NULL if memory allocation fails.
 */
char				**ft_split(char const *s, char c);

/**
 * @brief Converts an integer value to his string representation.
 * @param n Integer to be converted.
 * @return Pointer to the string. NULL if memory allocation fails.
 */
char				*ft_itoa(int n);

/**
 * @brief Applies the function 'f' to each character of the string 's'.
 *
 * 		  The function 'f' receives two arguments, first is the index of
 * 		  the current character, second is the character itself.
 * @param s The string of which to iterate.
 * @param f The function to apply to each character.
 * @return Pointer to the new string. NULL if memory allocation fails.
 */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function 'f' to each character of the string 's'.
 *
 * 		  The function 'f' receives two arguments, first is the index of
 * 		  the current character, second is the character itself.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return None
 */
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Writes the character 'c' to the given file descriptor 'fd'.
 * @param s The character to write.
 * @param fd The file descriptor on which to write.
 * @return None
 */
void				ft_putchar_fd(char c, int fd);

/**
 * @brief Writes the string 's' to the given file descriptor 'fd'.
 * @param s The string to write.
 * @param fd The file descriptor on which to write.
 * @return None
 */
void				ft_putstr_fd(char *s, int fd);

/**
 * @brief Writes the string 's' followed by a newline
 * 		  to the given file descriptor 'fd'.
 * @param s The string to write.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void				ft_putendl_fd(char *s, int fd);

/**
 * @brief Writes the number 'n' to the given file descriptor 'fd'.
 * @param s The number to write.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void				ft_putnbr_fd(int n, int fd);

/* BONUS PROTOTYPES */

/**
 * @brief Creates a new element on the list.
 * @param content The content to create the new element with.
 * @return The new element. NULL if the memory allocation fails.
 */
t_list				*ft_lstnew(void *content);

/**
 * @brief Adds a new element at the beginning of the list.
 * @param lst Pointer to a pointer to the first element on the list.
 * @param new Pointer to the element to be added to the list.
 * @return None.
 */
void				ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of elements in a list.
 * @param lst Pointer to a pointer to the first element on the list.
 * @return The number of elements in the list.
 */
int					ft_lstsize(t_list *lst);

/**
 * @brief Returns the last element on a list.
 * @param lst Pointer to a pointer to the first element on the list.
 * @return The last element on the list. NULL if the list is empty.
 */
t_list				*ft_lstlast(t_list *lst);

/**
 * @brief Adds a new element at the end of the list.
 * @param lst Pointer to a pointer to the first element of the list.
 * @param new Pointer to the element to be added to the list.
 * @return None.
 */
void				ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Deletes the given element on a list.
 * @param lst Pointer to an element on the list.
 * @param del Pointer to the function to apply to each element.
 * @return None.
 */
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes the given element and every successor of that element.
 * @param lst Pointer to an element on the list.
 * @param del Pointer to the function used to delete the elements.
 * @return None.
 */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Iterates over a list and applies a function to each element on it.
 * @param lst Pointer to first element on the list.
 * @param f Pointer to the function used to apply on each element.
 * @return None.
 */
void				ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates over a list and applies a function to each element on it,
 * 		  saving those changes in a new list.
 * @param lst Pointer to first element on the list.
 * @param f Pointer to the function used to apply on each element.
 * @param del Pointer to the function used to delete an element if needed.
 * @return The new created list. NULL if memory allocation fails.
 */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
