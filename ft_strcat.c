/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:19:28 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 01:09:09 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned char	*ptr;
	char			*ptr2;

	ptr = (unsigned char *) src;
	ptr2 = dest;
	while (*ptr2 != '\0')
		ptr2++;
	while (*ptr != '\0')
	{
		*ptr2 = *ptr;
		ptr2++;
		ptr++;
	}
	*ptr2 = '\0';
	return (dest);
}
