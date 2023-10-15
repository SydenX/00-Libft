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
int	main(int argc, char *argv[])
{
	char	*a = ft_calloc(5, 1);
	a = "salu";
	printf("%s", a);
	return (argc);
}