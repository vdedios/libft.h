#include "libft.h"

/*
Reserva memoria (con malloc(3)) para la cadena de
caracteres que va a devolver, y que proviene de la
cadena pasada como argumento.
Esta nueva cadena comienza en el índice ’start’ y
tiene como tamaño máximo ’len’. Start es el índice
de la posición de la cadena s desde el que se comienza a copiar
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ret;
	unsigned int i;
	unsigned int j;

	j = 0;
	i = start;
	if (!(ret = malloc (len * sizeof(char))))
		return NULL;
	while (j < len && s[i])
		ret[j++] = s[i++];
	ret[j] = '\0';
	return 	(ret);
}
