/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:30:35 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/13 01:25:32 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	unsigned char		*tmp;
	unsigned long long	result;
	int					minus;

	result = 0;
	minus = 0;
	tmp = (unsigned char *) ptr;
	while (ft_isspace(*tmp))
		tmp++;
	if (*tmp == '-')
	{
		minus = 1;
		tmp++;
	}
	else if (*tmp == '+')
		tmp++;
	while ((48 <= *tmp && *tmp <= 57))
	{
		result = result * 10 + *tmp - 48;
		tmp++;
	}
	if (minus == 1)
		result = -result;
	return (result);
}
