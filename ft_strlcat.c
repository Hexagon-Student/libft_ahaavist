/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:24:05 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/19 23:46:20 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	m;
	size_t	b;

	m = ft_strlen(src);
	b = ft_strlen(dest);
	if (n <= b)
		return (m + n);
	ft_strncat(dest, src, n - b - 1);
	return (m + b);
}
