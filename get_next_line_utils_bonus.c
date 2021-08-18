#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*dst;

	dst = (char *)malloc(n + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dst = (char *)malloc(len_s1 + len_s2 + 1);
	if (!dst)
		return (NULL);
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (dst - len_s1 - len_s2);
}

void	fdlst_clear(t_fd **fdlst, t_fd *target)
{
	t_fd	*tmp;

	if (!fdlst || !(*fdlst))
		return ;
	while (*fdlst)
	{
		tmp = (*fdlst)->next;
		if (*fdlst == target)
		{
			free((*fdlst)->content);
			free(*fdlst);
		}
		*fdlst = tmp;
	}
}
