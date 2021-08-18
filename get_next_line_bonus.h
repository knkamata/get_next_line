#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# define SUCCESS 1
# define ENDOFFILE 0
# define ERROR -1

typedef struct s_fd
{
	int				value;
	char			*content;
	struct s_fd		*next;
}	t_fd;

/* get_next_line.c */
char	*get_next_line(int fd);

/* get_next_line_utils.c */
/* free memory */
void	fdlst_clear(t_fd **fdlst, t_fd *target);

/* libft */
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
