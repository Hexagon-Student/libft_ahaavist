/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:25:48 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 00:26:11 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *) src;
	ptr2 = (unsigned char *) dest;
	while (*ptr2 != '\0')
		ptr2++;
	while (*ptr != '\0' && n > 0)
	{
		*ptr2 = *ptr;
		ptr2++;
		ptr++;
		n--;
	}
	*ptr2 = '\0';
	return (dest);
}
