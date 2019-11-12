#include "libft.h"

/*
Reserva memoria (con malloc(3)) para la cadena de
caracteres que va a devolver, que es una copia
de la cadena de caracteres pasada como argumento,
sin los caracteres indicados en el set (pasado como
argumento) al principio y al final de la cadena de
caracteres. Siempre que hay un caracter igual que en
el set avanza y elimina.
*/

static size_t ft_position(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		while (j < ft_strlen(set))	
		{
			if (s1[i] == set[j])
				break;
			j++;
		}
		if (j >= ft_strlen(set))
			return (i);
		j = 0;
		i++;
	}
	return (i);
}
 
char	*ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	size_t i;
	size_t f;

	if(!(trim = malloc(ft_strlen(s1) * sizeof(char))))
		return (NULL);
	i = ft_position(s1, set);
	s1 = ft_strrev(s1);
	f = (unsigned int)ft_position(s1, set);
	s1 = ft_strrev(s1);
	f = (size_t)ft_strlen(s1) - i - f;
	trim = ft_substr(s1, i, f);
	return (trim);
}
