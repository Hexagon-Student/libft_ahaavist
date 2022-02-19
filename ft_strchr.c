/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:19:57 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 01:00:47 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*src;

	src = (unsigned char *) s;
	while (*src != '\0' || c == 0)
	{
		if (*src == c)
			return ((char *) src);
		src++;
	}
	return (NULL);
}
