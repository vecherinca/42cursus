/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:05:11 by mklimina          #+#    #+#             */
/*   Updated: 2022/11/20 17:08:30 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
 
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;


int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);  
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *src);
unsigned int	ft_strlcat(char * dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strrchr(const char *s, int c);
char *ft_itoa(int n);
char *ft_strcpy(char *dest, char *src);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));

// bonus 
t_list *ft_lstnew(void *content);
int ft_lstsize(t_list *lst);
void ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
#endif