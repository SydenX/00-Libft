
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	dstln;

	dstln = 0;
	while (dst[dstln] != 0 && (int)dstsize > dstln)
		dstln++;
	i = 0;
	while (i < (int)dstsize - dstln - 1 && src[i] != 0)
	{
		dst[dstln + i] = src[i];
		i++;
	}
	if (i > 0)
		dst[dstln + i] = 0;
	
	return (dstln + ft_strlen(src));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char *argv[])
// {
// 	char *dst = malloc(6);
// 	dst[0] = 121;
// 	dst[1] = 122;
// 	printf("%zu\n", ft_strlcat(dst, argv[1], 6));
// 	printf("%s", dst);
// 	return (argc);
// }
