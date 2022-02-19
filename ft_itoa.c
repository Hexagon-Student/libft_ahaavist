/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:44:46 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/20 16:38:46 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*make_string(int n, int *decs)
{
	int		count;
	char	*str;

	count = 0;
	*decs = 1;
	if (n < 0)
		count++;
	*decs = *decs - count * 2;
	while (n <= -10 || n >= 10)
	{
		*decs = *decs * 10;
		n = n / 10;
		count++;
	}
	count++;
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*tmp;
	int		decs;
	int		sign;

	str = make_string(n, &decs);
	if (!str)
		return (NULL);
	tmp = str;
	sign = 1;
	if (n < 0)
	{
		*tmp++ = '-';
		sign = -1;
	}
	while (decs * sign > 0)
	{
		*tmp++ = n / decs + 48;
		n = n % decs;
		decs = decs / 10;
	}
	*tmp = '\0';
	return (str);
}
