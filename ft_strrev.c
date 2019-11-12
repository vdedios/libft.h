#include "libft.h"

char const	*ft_strrev(char const *s1)
{
	char *aux;
	size_t l;
	size_t i;

	i = 0;
	l = ft_strlen(s1);
	if (!(aux = (char *)malloc (ft_strlen(s1) * sizeof(char))))
		return (NULL);;
	while (*s1)
		s1++;
	s1--;
	while (i < l)
	{
		*aux++ = *s1--;
		i++;
	}
	return (char const*)(aux - l);
}

