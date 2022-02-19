/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:10:53 by ahaavist          #+#    #+#             */
/*   Updated: 2022/01/23 07:07:59 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, char c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*s;

	ptr = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- >= 1)
	{
		*ptr = *s;
		s++;
		if (*ptr++ == (unsigned char)c)
			return (ptr);
	}
	return (NULL);
}
