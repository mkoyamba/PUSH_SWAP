/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:34:28 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/21 11:54:24 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*  		==================(     INCLUDES     )==================		  */

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

/*  		==================(      MACROS      )==================		  */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef void	(*t_tabp)(va_list, int *);

/*  		==================(    PROTOTYPES    )==================		  */

/*  	CTYPE	  */

int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isascii(int n);
int		ft_isdigit(int n);
int		ft_isprint(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*  	STRING	  */

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);

/*  	STDLIB	  */

int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);

/*  	ABS		  */

char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*  	BONUS	  */

void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/*  	PRINTF	  */

int		ft_printf(const char *str, ...);
void	ft_flag_c(va_list args, int *nb);
void	ft_flag_d(va_list args, int *nb);
void	ft_flag_i(va_list args, int *nb);
void	ft_flag_p(va_list args, int *nb);
void	ft_flag_perc(va_list args, int *nb);
void	ft_flag_s(va_list args, int *nb);
void	ft_flag_u(va_list args, int *nb);
void	ft_flag_x(va_list args, int *nb);
void	ft_flag_bx(va_list args, int *nb);

/*  	GET NEXT LINE	  */

char	*get_next_line(int fd);
char	*ft_read(int fd, char *str);
char	*ft_get_line(char *str);
char	*ft_update(char *str);
char	*ft_strjoin_gnl(char *str, char *buff);

#endif