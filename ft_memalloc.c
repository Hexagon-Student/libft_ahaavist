/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:10:24 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/18 19:42:46 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	char	*ptr2;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	ptr2 = ptr;
	while (size-- > 1)
		*ptr2++ = 0;
	*ptr2 = 0;
	return (ptr);
}
