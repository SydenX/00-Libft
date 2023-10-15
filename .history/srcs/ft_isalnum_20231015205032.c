

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	printf("%d", ft_isalnum(argv[1][0]));
// 	return (argc);
// }
