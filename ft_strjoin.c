#include "libft.h"

/*
Reserva memoria (con malloc(3)) para la cadena de
caracteres que va a devolver, y que resulta de la
concatenación de s1 y s2.
*/

char *ft_strjoin(char const *s1, char const *s2)
{
	char *joint;
	size_t l;
	size_t i;
	size_t j;
	
	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(joint = malloc(l * sizeof(char))))
		return (NULL);
	l = 0;
	i = 0;
	j = 0;
	while (l < (ft_strlen(s1) + ft_strlen(s2)))
	{
		if (l < ft_strlen(s1))
			joint[l++] = s1[i++];
		else 
			joint[l++] = s2[j++];
	}
	joint[l] = '\0';
	return joint;
}
