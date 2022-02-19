/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:11:39 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 01:45:37 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	s = NULL;
	return (NULL);
}
