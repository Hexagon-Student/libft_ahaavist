/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:24:37 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/19 04:33:51 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*tmp;

	ptr = ft_strnew(ft_strlen(s));
	if (!ptr)
		return (NULL);
	tmp = ptr;
	while (*s != '\0')
		*tmp++ = (*f)(*s++);
	*tmp = '\0';
	return (ptr);
}
