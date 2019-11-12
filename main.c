/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:26:14 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/08 12:44:38 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char	str[] = "cadena de prueba inicial";

	printf("CADENA INICIAL\n\t%s\n", str);

	/*memset*/
	printf("FT_MEMSET\n");
	printf("\tmemset: %s\n",memset(str, 'a', 6));
	printf("\tft_memset: %s\n", ft_memset(str, '1', 6));

	/*bzero*/
	printf("FT_BZERO\n");
	bzero(str, 6);
	printf("\tbzero: %s\n", str);
	ft_bzero(str, 6);
	printf("\tft_bzero: %s\n", str);

	/*memcpy*/
	printf("FT_MEMCPY\n");
	printf("\tcadena source: hola\n");
	printf("\tmemcpy: %s\n", memcpy(str,"hola", 4));
	printf("\tft_memcpy: %s\n", ft_memcpy(str,"hola", 4));

	/*memccpy*/
	printf("FT_MEMCCPY\n");
	printf("\tcadena source: hola\n");
	printf("\tmemccpy: %s\n", memccpy(str,"hola", 'o', 4));
	printf("\tft_memccpy: %s\n", ft_memccpy(str,"hola", 'o', 4));

	/*memmove*/
	printf("FT_MEMMOVE\n");
	printf("\tcadena source: que\n");
	printf("\tmemmove: %s\n", memmove(str,"que", 4));
	printf("\tft_memmove: %s\n", ft_memmove(str,"que", 4));

	/*memchr*/
	printf("FT_MEMCHR\n");
	printf("\tcadena source: que\n");
	printf("\tmemchr: %s\n", memchr(str, 'u', 4));
	printf("\tft_memchr: %s\n", ft_memchr(str, 'u', 4));

	/*memcmp*/
	printf("FT_MEMCMP\n");
	printf("\tcadena source: que\n");
	printf("\tmemcmp: %d\n", memcmp("hoLa", "hola", 6));
	printf("\tft_memcmp: %d\n", ft_memcmp("hoLa", "hola", 6));

	/*strlen*/
	printf("FT_STRLEN\n");
	printf("\tstrlen: %lu\n", strlen("hoLa"));
	printf("\tft_strlen: %zu\n", ft_strlen("hoLa"));

	/*isalpha*/
	printf("FT_ISDIGIT\n");
	printf("\tcadena source: que\n");
	printf("\tispalha: %d\n", isalpha('a'));
	printf("\tft_isalpha: %d\n", ft_isalpha('a'));

	/*isdigit*/
	printf("FT_ISDIGIT\n");
	printf("\tcadena source: que\n");
	printf("\tisdigit: %d\n", isdigit('a'));
	printf("\tft_isdigit: %d\n", ft_isdigit('a'));

	/*isalnum*/
	printf("FT_ISALNUM\n");
	printf("\tcadena source: que\n");
	printf("\tisalnum: %d\n", isalnum('&'));
	printf("\tft_isalnum: %d\n", ft_isalnum('&'));

	/*isascii*/
	printf("FT_ISASCII\n");
	printf("\tcadena source: que\n");
	printf("\tisascii: %d\n", isascii(-1));
	printf("\tft_isascii: %d\n", ft_isascii(254));

	/*isprint*/
	printf("FT_ISPRINT\n");
	printf("\tcadena source: que\n");
	printf("\tisprint: %d\n", isprint(12));
	printf("\tft_isprint: %d\n", ft_isprint(128));

	/*toupper*/
	printf("FT_TOUPPER\n");
	printf("\tcadena source: que\n");
	printf("\ttoupper: %c\n", toupper('a'));
	printf("\tft_toupper: %c\n", ft_toupper('a'));

	/*tolower*/
	printf("FT_TOLOWER\n");
	printf("\tcadena source: que\n");
	printf("\ttolower: %c\n", tolower('A'));
	printf("\tft_tolower: %c\n", ft_tolower('A'));

	/*strchr*/
	printf("FT_STRCHR\n");
	printf("\tstrchr: %s\n", strchr("hoAla",'\0'));
	printf("\tft_strchr: %s\n", ft_strchr("hoAla",'\0'));

	/*strrchr*/
	printf("FT_STRRCHR\n");
	printf("\tstrrchr: %s\n", strrchr("hoalalo",'a'));
	printf("\tft_strrchr: %s\n", ft_strrchr("hoalalo",'a'));

	/*strncmp*/
	printf("FT_STRNCMP\n");
	printf("\tstrncmp: %d\n", strncmp("hozaalo","hola", 5));
	printf("\tft_strncmp: %d\n", ft_strncmp("hoklalo","hola", 5));

	char	*dest;
	char	*dest2;
	dest = (char*)malloc(sizeof(char)*15);
	dest2 = (char*)malloc(sizeof(char)*15);

	/*strlcpy*/
	printf("FT_STRLCPY\n");
	printf("\tstrlcpy: %lu y %s\n", strlcpy(dest,"loremaaa", 6), dest);
	printf("\tft_strlcpy: %lu y %s\n", ft_strlcpy(dest2,"loremaaa", 6), dest2);

	/*strlcat*/
	printf("FT_STRLCAT\n");
	printf("\tstrlcat: %lu y %s\n", strlcat(dest,"lolololo", 20), dest);
	printf("\tft_strlcat: %lu y %s\n", ft_strlcat(dest2,"lolololo", 20), dest2);

	/*strnstr*/
	printf("FT_STRNSTR\n");
	printf("\tstrnstr: %s y %s\n", strnstr(dest,"emlo", 50), dest);
	printf("\tft_strnstr: %s y %s\n", ft_strnstr(dest2,"emlo", 50), dest2);

	/*atoi*/
	printf("FT_ATOI\n");
	printf("\tatoi: %d\n",  atoi("   	\r 90000000000000000"));
	printf("\tft_atoi: %d\n", ft_atoi("		  ---+9 000"));
	
	/*calloc*/
	void *p1;
	void *p2;
	
	p1 = calloc(3,4);
	p2 = ft_calloc(3,4);
	printf("FT_CALLOC\n");
	printf("\tcalloc: %s\n", p1);
	printf("\tft_calloc: %s\n", p2);

	/*strdup*/
	
	char *p3;
	p3 = ft_strdup("hola loco");
	printf("FT_STRDUP\n");
	printf("\tstrdup: %s\n", strdup("hola loco"));
	printf("\tft_strdup: %s\n", p3);


	/*FUNCIONES ADICIONALES*/

	/*substr*/
	
	printf("FT_SUBSTR\n");
	printf("\tft_substr: %s\n", ft_substr("hola que tal", 4, 10));
	
	/*strjoin*/
	
	printf("FT_STRJOIN\n");
	printf("\tft_strjoin: %s\n", ft_strjoin("hola que", " tal"));

	/*strtrim*/
	
	printf("FT_STRIM\n");
	printf("\tft_strtrim:%s\n", ft_strtrim(" hola que tal   ", " halt"));
	
	/*split*/
	
	printf("FT_SPLIT\n");
	ft_split("hola que tal", ' ');
}
