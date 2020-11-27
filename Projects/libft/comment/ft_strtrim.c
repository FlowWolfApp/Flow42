// On parcours set à la recherche de c, si on le trouve on renvoi 1, sinon 0
static unsigned int	is_to_trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	str_size;
	char	*str_start;
	char	*str_end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
// On avance tant qu'on a des caractères à trimmer
	while (s1[i] && is_to_trim(s1[i], set))
		i++;
// On positionne notre str start
	str_start = (char *)&s1[i];
// On met le curseur à la fin de s1
	if ((i = ft_strlen((char *)s1) - 1) != -1)
// Tant qu'on a des carac a trimmer on recule 
		while (i >= 0 && is_to_trim(s1[i], set))
			i--;
// On positionne notre str end
	str_end = (char *)&s1[i];
// on définit la taille à mallocker avec /0 et s1
	if (!*s1 || str_end == str_start)
		str_size = 2;
	else
		str_size = str_end - str_start + 2;
	if (!(str = malloc(sizeof(char) * str_size)))
		return (NULL);
// On copie str à partir du 1er carac à ne pas trimmer
	ft_strlcpy(str, str_start, str_size);
	return (str);
}

int					main(void)
{
	printf("%s\n", ft_strtrim("aaa   lorem ipsum dolor sit amaaoooa", "ao"));
	return (0);
}

// test fonctionnel


#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int		ft_strlen(char *s1)
{
	int		size;

	size = 0;
	while (s1[size])
		size++;
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	if (!dest || !src)
		return (0);
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (src[a] && a < size - 1)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (i);
}
static unsigned int	is_to_trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	str_size;
	char			*str_start;
	char			*str_end;
	char			*str;
	char			*str1;

	str1 = (char *)s1;
	if (!str1 || !set)
		return (NULL);
	i = 0;
	while (str1[i] && is_to_trim(str1[i], set))
		i++;
	str_start = (char *)&str1[i];
	i = ft_strlen((char *)str1) -1;
	while (i >= 0 && is_to_trim(str1[i], set))
		i--;
	str_end = (char *)&str1[i];
	if (!*str1 || str_end == str_start)
		str_size = 2;
	else
		str_size = str_end - str_start + 2;
	if (!(str = malloc(sizeof(char) * str_size)))
		return (NULL);
	ft_strlcpy(str, str_start, str_size);
	return (str);
}

int					main(void)
{
	printf("%s\n", ft_strtrim("aaa   lorem ipsum dolor sit amaaoooa", "ao"));
	return (0);
}
