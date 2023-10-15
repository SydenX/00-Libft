#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if(mem == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}