/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:30:09 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 02:22:48 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	index;

	if (s == NULL)
		return (NULL);
	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	index = 0;
	while (index < len)
		sub[index++] = s[start++];
	return (sub);
}
