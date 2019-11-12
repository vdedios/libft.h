#include "libft.h"

/*
     The strdup() function allocates sufficient memory for a copy of the string s1,
     does the copy, and returns a pointer to it.  The pointer may subsequently be
     used as an argument to the function free(3)
*/

char	*ft_strdup(const char *s1)
{
	char *cpy;
	
	if(!(cpy = (char *)malloc( (ft_strlen(s1) + 1) * sizeof(char))))
		return (0);
	ft_strlcpy(cpy, s1, ft_strlen(s1) + 1);
	return (cpy);
}
