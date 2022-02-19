/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:21:34 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 02:02:36 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char const	*ptr;
	char		*ptr2;

	ptr = src;
	ptr2 = dest;
	while (*ptr != '\0')
		*ptr2++ = *ptr++;
	*ptr2 = '\0';
	return (dest);
}
