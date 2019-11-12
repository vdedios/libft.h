#include "libft.h"

/*
   Divide una cadena de caracteres en trozos separadas por
   un delimitador y la guarda en un array bidimensional
   1- f1: Buscamos el primer caracter delimitador + cuento longitud + elimino esa palabra. Devuelvo la palabra
 */

static	char *ft_first_word(char const *s, char c)
{
	size_t i;
	size_t j;
	char *word;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			break;
		i++;
	}
	if(!(word = (char *)malloc(i * sizeof(char))))
		return (NULL);
	while (j < i)
	{
		word[j] = s[j];
			j++;
	}
	word[j] = '\0';
	return word;
}

static char const *ft_remain_str(char const *s, char *word)
{
	char *aux;
	size_t s_len;
	size_t word_len;

	s_len = ft_strlen(s);
	word_len = ft_strlen(word);
	if (!(aux = (char *)malloc(s_len * sizeof(char))))
		return (NULL);
	if (word_len == s_len)
		return (NULL);
	while (*s == *word)
	{
		s++;
		word++;
	}
	while (word_len < s_len)
	{
		aux[word_len] = *s++;	
		word_len++;
	}
	aux[word_len] = '\0';
	return ((char const*)aux);
}

static size_t	ft_count_words(char const *s, char c)
{	
	size_t i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return i;
}

static void	ft_cpy_values(char *matrix, char *word)
{
	while (*word)
		*matrix++ = *word++;
	*(matrix + 1) = '\0';
}

char	**ft_split(char const *s, char c)
{
	char *word;
	char **matrix;
	size_t i;
	size_t matrix_size;
	
	i = 0;
	matrix_size = ft_count_words(s, c);	
	if (!(matrix =(char **)malloc(matrix_size * sizeof(char*))))
		return (NULL);
	while (i < matrix_size)
	{
		word = ft_first_word(s, c);
		s = ft_remain_str(s, word);
		if(!(matrix[i] = (char *)malloc(ft_strlen(word) * sizeof(char))))
			return (NULL);
		ft_cpy_values(matrix[i], word);
		printf("	%s\n", matrix[i]);
		i++;
	}
	matrix[i] = NULL;
	return matrix;
}

//Arreglar y no incluir delimitador en la matrix
















