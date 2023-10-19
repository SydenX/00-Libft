#include "libft.h"
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (strcmp(argv[1], "atoi") == 0)
		printf("%d", ft_atoi(argv[2]));
	if (strcmp(argv[1], "isalnum") == 0)
		printf("%d", ft_isalnum(argv[2][0]));
	if (strcmp(argv[1], "isalpha") == 0)
		printf("%d", ft_isalpha(argv[2][0]));
	if (strcmp(argv[1], "isascii") == 0)
		printf("%d", ft_isascii(argv[2][0]));
	if (strcmp(argv[1], "isprint") == 0)
		printf("%d", ft_isprint(argv[2][0]));
	if (strcmp(argv[1], "isdigit") == 0)
		printf("%d", ft_isdigit(argv[2][0]));
	if (strcmp(argv[1], "itoa") == 0)
		printf("%s", ft_itoa(ft_atoi(argv[2])));
	if (strcmp(argv[1], "memchr") == 0)
		printf("%s", (char *)ft_memchr((const void *)argv[2],argv[3][0],5));
	if (strcmp(argv[1], "memcmp") == 0)
		printf("%d", ft_memcmp(argv[2], argv[3], 5));
	if (strcmp(argv[1], "memcpy") == 0)
		printf("%s", ft_memcpy(argv[2], argv[3], 2));
	if (strcmp(argv[1], "memmove") == 0)
		printf("%s", ft_memmove(argv[2], argv[3], 4));
	if (strcmp(argv[1], "memset") == 0)
		printf("%s", ft_memset(argv[2]+1, 'z', 2));
	if (strcmp(argv[1], "split") == 0){
		char	**splitted = ft_split(argv[2], argv[3][0]);
		int	i = 0;
		while (splitted[i]){
			printf("%s", splitted[i]);
			i++;
		}
	}
	if (strcmp(argv[1], "strchr") == 0)
		printf("%s", ft_strchr(argv[2], argv[3][0]));
	if (strcmp(argv[1], "strdup") == 0)
		printf("%s", ft_strdup(argv[2]));
	if (strcmp(argv[1], "strjoin") == 0)
		printf("%s", ft_strjoin(argv[2], argv[3]));
	if (strcmp(argv[1], "strlcat") == 0){
		char *dst = malloc(6);
		dst[0] = 121;
		dst[1] = 122;
		printf("%zu\n", ft_strlcat(dst, argv[2], 6));
		printf("%s", dst);
	}
	if (strcmp(argv[1], "strlcpy") == 0){
		char *dst = malloc(3);
		printf("%zu\n", ft_strlcpy(dst, argv[2], 3));
		printf("%s", dst);
	}
	if (strcmp(argv[1], "substr") == 0)
		printf("%s", ft_substr(argv[2], 3, 6));
	if (strcmp(argv[1], "strlen") == 0)
		printf("%zu", ft_strlen(argv[2]));
	if (strcmp(argv[1], "strncmp") == 0)
		printf("%d", ft_strncmp(argv[2], argv[3], 3));
	if (strcmp(argv[1], "strnstr") == 0)
		printf("%s", ft_strnstr(argv[2], argv[3], 5));
	if (strcmp(argv[1], "strrchr") == 0)
		printf("%s", ft_strrchr(argv[2], argv[3][0]));
	if (strcmp(argv[1], "strtrim") == 0)
		printf("%s\n", ft_strtrim(argv[2], argv[3]));
	if (strcmp(argv[1], "tolower") == 0)
		printf("%d", ft_tolower(argv[2][0]));
	if (strcmp(argv[1], "toupper") == 0)
		printf("%d", ft_toupper(argv[2][0]));
	return (argc);
}