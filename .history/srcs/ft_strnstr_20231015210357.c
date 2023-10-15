
#include "libft.h"

int	ft_find(const char *src, const char *tofind)
{
	int	i;

	i = 0;
	while (tofind[i] == src[i])
	{
		if (ft_strlen(tofind) - 1 == i)
			return (1);
		if (tofind[i] != 0 && tofind[i] != src[i])
			return (0);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (i < (int) n && haystack[i] != 0)
	{
		if (haystack[i] == needle[0])
		{
			if(ft_find(&haystack[i], needle) == 1)
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	printf("%s", ft_strnstr(argv[1], argv[2], 18));
// 	return (argc);
// }