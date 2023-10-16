
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		j;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		str[i + j] = s2[j];
		j++;
	}
	return (str);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_strjoinr(argv[1], argv[2]));
	return (argc);
}
