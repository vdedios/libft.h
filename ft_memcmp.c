/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:51:00 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/07 13:39:51 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
       The memcmp() function compares the first n bytes (each interpreted as
       unsigned char) of the memory areas s1 and s2.
*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (n == 0)
		return 0;
	while(n > 0)
	{
		if(*str1 != *str2)
		{
			if ((*str1 - *str2) < 0 )
				return -1;
			else
				return 1;
		}
		str1++;
		str2++;
		n--;
	}
	return 0;
}
