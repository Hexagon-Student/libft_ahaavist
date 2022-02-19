/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:30:42 by ahaavist          #+#    #+#             */
/*   Updated: 2022/01/23 07:44:08 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cpy;
	int		i;
	int		end_i;
	int		start_i;

	start_i = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	end_i = ft_strlen(s) - 1;
	while (s[start_i] == ' ' || s[start_i] == '\n' || s[start_i] == '\t')
		start_i++;
	if (start_i != end_i + 1)
	{
		while (s[end_i] == ' ' || s[end_i] == '\n' || s[end_i] == '\t')
			end_i--;
	}
	cpy = (char *)malloc((end_i - start_i + 1) * sizeof(char) + 1);
	if (cpy == NULL)
		return (NULL);
	while (start_i <= end_i)
		cpy[i++] = s[start_i++];
	cpy[i] = '\0';
	return (cpy);
}
