/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:02:16 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/06 14:20:15 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The bzero() function writes n zeroed bytes ('\0') to the string s.
If n is zero, bzero() does nothing.
 */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	char *str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
		str[i++] = 0;
}
