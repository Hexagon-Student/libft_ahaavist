/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:13:41 by ahaavist          #+#    #+#             */
/*   Updated: 2022/01/23 07:09:27 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*s;
	int				direction;

	if (!src && !dest && n > 0)
		return (NULL);
	ptr = dest;
	s = (unsigned char *) src;
	if (s > ptr)
		direction = 1;
	else
	{
		direction = -1;
		s += n - 1;
		ptr += n - 1;
	}
	while (n-- > 0)
	{
		*ptr = *s;
		ptr += direction;
		s += direction;
	}
	return (dest);
}
