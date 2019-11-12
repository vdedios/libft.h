/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:42:33 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/07 11:29:53 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
	The memchr() function scans the initial n bytes of the memory area
    pointed to by s for the first instance of c.  Both c and the bytes of
    the memory area pointed to by s are interpreted as unsigned char. 
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *p;

	i = 0;
	p = (char*)s;
	while (*p != c && i < n)
	{
		p++;
		i++;
	}
	if (*p == '\0' || i == n)
		return 0;
	return p; 
}
