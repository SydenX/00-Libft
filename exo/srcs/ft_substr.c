
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;
	
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		str = malloc((ft_strlen(&s[start]) + 1) * sizeof(char));
	else
		str = malloc((len + 1) * sizeof(char));
	return (ft_strlcpy(str, &s[start], len + 1));
}
