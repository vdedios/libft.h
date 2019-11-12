#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *found;

	i = 0;
	j = 0;
	found = (char*) haystack;
	while (found[j] && j < len)
	{
		while (found[j + i] == needle[i])
		{
			if (!needle[i])
				break;
			i++;
		}
		if (i == ft_strlen(needle))
			return &found[j];
		i = 0;
		j++;
	}
	return (0);		
}
