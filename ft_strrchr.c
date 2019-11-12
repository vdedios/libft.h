/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:01:18 by vde-dios          #+#    #+#             */
/*   Updated: 2019/11/07 17:21:59 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strchr() function returns a pointer to the last occurrence of
	the character c in the string s.
 */

char *ft_strrchr(const char *s, int c)
{
	char *p;
	int i;
	int j;

	p = (char*)s;
	i = 0;
	j = 0;
	while (p[i])
	{
		if (p[i] != c)
			j++;
		else
			j = 0;
		i++;
	}
	i--;
	if (i != j)
		return (&p[i - j]);
	return (0);
}
