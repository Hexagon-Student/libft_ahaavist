/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:27:14 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/19 04:28:43 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*tmp;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	tmp = str;
	while (size > 0)
	{
		*tmp++ = '\0';
		size--;
	}
	*tmp = '\0';
	return (str);
}
