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