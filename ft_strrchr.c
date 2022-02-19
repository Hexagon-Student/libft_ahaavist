/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:27:57 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 01:09:50 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*string;
	int				count;

	count = 0;
	string = (unsigned char *) s;
	while (*string++ != '\0')
		count++;
	string--;
	while (count-- >= 0 || c == 0)
	{
		if (*string == c)
			return ((char *) string);
		string--;
	}
	return (NULL);
}
