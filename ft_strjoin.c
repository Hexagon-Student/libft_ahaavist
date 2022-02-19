/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:23:31 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/19 00:47:56 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	s1_lenght;
	size_t	s2_lenght;

	s1_lenght = ft_strlen(s1);
	s2_lenght = ft_strlen(s2);
	tmp = ft_strnew(s1_lenght + s2_lenght);
	if (!tmp)
		return (NULL);
	ft_strcpy(tmp, s1);
	tmp = ft_strcat(tmp, s2);
	return (tmp);
}
