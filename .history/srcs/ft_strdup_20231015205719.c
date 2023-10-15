
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int	i;

	copy = malloc((ft_strlen() + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	printf("%s", ft_strdup(argv[1]));
// 	return (argc);
// }