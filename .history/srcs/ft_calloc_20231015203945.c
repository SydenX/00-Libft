#include <stdlib.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if ((nmemb || size) == 0)
		return (NULL);
	if (nmemb * size > 2147483647)
		return (NULL);
	mem = malloc(nmemb * size);
	if(mem == NULL)
		return (NULL);
	return (mem);
}

#include <stdio.h>
int	main(void)
{
	char	*a = (char *) ft_calloc(6, 1);
	a = "salut";
	printf("%s", a);
	return (0);
}