/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:09:30 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/07 09:25:01 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memccpy() function copies no more than n bytes from memory area
       src to memory area dest, stopping when the character c is found.*/

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *str1;
	const char *str2;

	size_t i = 0;
	str1 = dst;
	str2 = src;
	while (i < n && str2[i] != c)
	{
		str1[i] = str2[i];
		dst++;
		i++;
	}
	if(i != n)
		return dst + 1;
	return 0;
}
