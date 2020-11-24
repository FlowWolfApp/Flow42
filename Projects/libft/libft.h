/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 13:09:56 by fspano            #+#    #+#             */
/*   Updated: 2020/11/23 17:27:35 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "libft_bonus.h"

// FUNCTIONS DECLARATION DONE

int					ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
int					ft_strlen(char *s1);
int					ft_atoi(char *str);

char				*ft_strdup(char *src);

// FUNCTIONS DECLARATION - TO BE DONE

void				*ft_memset (void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
/*void				*memchr(const void *s, int c, size_t n);
int					memcmp(const void *s1, const void *s2, size_t n);

int					isalpha(int c);
int					isdigit(int c);
int					isalnum(int c);
int					isascii(int c);
int					isprint(int c);

int					toupper(int c);
int					tolower(int c);

char				*strchr(const char *s, int c);
char				*strrchr(const char *s, int c);
//size_			strlcat(char *dst, const char *src, size_t size);
char				*strnstr(const char *big, const char *little, size_t len);

void				*calloc(size_t nmemb, size_t size);

// FUNCTION SUPP - TO BE DONE

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

// FUNCTION BONUS - TO BE DONE

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
*/

#endif
