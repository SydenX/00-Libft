#include <stdlib.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if ((nmemb || size) == 0)
		return (NULL);
	if (nmemb * size > 2147483647)
		return (NULL);
	mem = malloc(nmemb * size + 1);
	if(mem == NULL)
		return (NULL);
	return (mem);
}

#include <stdio.h>
int	main(void)
{
	char	*a = ft_calloc(5, 1);
	a = "salut";
	printf("%s", a);
	return (0);
}