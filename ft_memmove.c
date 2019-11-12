/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:25:27 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/07 10:39:56 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
   The memmove() function copies n bytes from memory area src to memory
   area dest.  The memory areas may overlap: copying takes place as
   though the bytes in src are first copied into a temporary array that
   does not overlap src or dest, and the bytes are then copied from the
   temporary array to dest.
   */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char *str_src;
	char *str_dst;
	size_t i;

	str_dst = dst;
	str_src = src;
	if(str_src < str_dst)
	{
		i = len;
		while (i > 0)
		{
			str_dst[i] = str_src[i];	
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			str_dst[i] = str_src[i];	
			i++;
		}
	}
	return dst;
}
