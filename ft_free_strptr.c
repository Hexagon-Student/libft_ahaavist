/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 00:25:20 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/19 01:02:40 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_free_strptr(char **strptr)
{
	char	**tmp;
	char	**tmp2;

	tmp = strptr;
	while (*tmp)
	{
		tmp2 = tmp;
		tmp++;
		free(*tmp2);
	}
	free(strptr);
	return (NULL);
}
