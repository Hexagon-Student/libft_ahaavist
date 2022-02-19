/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:26:28 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/19 23:48:15 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	x;

	x = 0;
	while (src[x] != '\0' && n > x)
	{
		dest[x] = src[x];
		x++;
	}
	while (n > x)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
