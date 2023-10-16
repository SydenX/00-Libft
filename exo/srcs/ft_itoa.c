
#include "libft.h"

int	ft_nbrlen(int n)
{
	int	ln;

	ln = 1;
	while (n / 10 > 0)
	{
		ln++;
		n /= 10;
	}
	return (ln);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc((ft_nbrlen(n) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = ft_nbrlen(n);
	str[i] = 0;
	while (i > 0)
	{
		str[i - 1] = n % 10;
		n /= 10;
	}
	return (str);
}
