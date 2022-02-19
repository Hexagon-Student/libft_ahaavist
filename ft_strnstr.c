/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:27:38 by ahaavist          #+#    #+#             */
/*   Updated: 2022/01/23 07:18:56 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	if (*s2 == '\0')
		return ((char *) s1);
	while (*s1 != '\0')
	{
		while (*s1 != *s2 && n > 0)
		{
			if (*s1 == '\0')
				return (NULL);
			s1++;
			n--;
		}
		x = 0;
		while (s1[x] == s2[x] && s2[x] != '\0' && x < n)
			x++;
		if (s2[x] == '\0')
			return ((char *) s1);
		s1++;
		if (n > 0)
			n--;
	}
	return (NULL);
}
