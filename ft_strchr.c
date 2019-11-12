/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:50:27 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/07 17:08:36 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strchr() function returns a pointer to the first occurrence of
	the character c in the string s.
 */

char *ft_strchr(const char *s, int c)
{
	char *p;

	p = (char*)s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (!*p)
		return (p);
	return (0);
}
