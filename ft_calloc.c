/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:34:26 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/18 12:41:54 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Differences with  malloc
** - memory intialization to NULL
** - memory allocation is done in a format of count
** blocks of size size
**
** Memory allocation must be done with malloc at once
** since if we try to do it in separate times, malloc
** allocate adjacent memory
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (!(array = (char *)malloc(size * count)))
		return (0);
	ft_memset(array, 0, size * count);
	return (array);
}
