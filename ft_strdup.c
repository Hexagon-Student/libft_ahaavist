/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:23:47 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/18 23:02:04 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		x;

	dup = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	x = 0;
	while (src[x] != '\0')
	{
		dup[x] = src[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}
