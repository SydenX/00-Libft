
int	ft_atoi(const char *str)
{
	int	i;
	int	negation;
	int	nb;

	nb = 0;
	negation = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negation = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * negation);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi(argv[1]));
	return (argc);
}