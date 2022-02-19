/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:29:40 by ahaavist          #+#    #+#             */
/*   Updated: 2022/01/23 07:30:53 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	x;

	if (*s2 == '\0')
		return ((char *) s1);
	while (*s1 != '\0')
	{
		while (*s1 != *s2)
		{
			if (*s1 == '\0')
				return (NULL);
			s1++;
		}
		x = 0;
		while (s1[x] == s2[x] && s2[x] != '\0')
			x++;
		if (s2[x] == '\0')
			return ((char *) s1);
		s1++;
	}
	return (NULL);
}
