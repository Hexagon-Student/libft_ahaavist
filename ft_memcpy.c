/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:12:48 by ahaavist          #+#    #+#             */
/*   Updated: 2022/01/23 07:05:10 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*s;

	if (!src && !dest && n > 0)
		return (NULL);
	ptr = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
	{
		*ptr = *s;
		ptr++;
		s++;
	}
	return (dest);
}
