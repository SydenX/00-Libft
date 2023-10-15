#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = 0;
		copy++;
		n--;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if(mem == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

#include <stdio.h>
int	main(void)
{
	char	*a = (char *) ft_calloc(1, 6);
	a = "salut"
	printf("%s", a);
	return (0);
}