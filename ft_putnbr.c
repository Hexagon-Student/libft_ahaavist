/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:18:41 by ahaavist          #+#    #+#             */
/*   Updated: 2021/12/19 23:18:46 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recurse(int n)
{
	if (n == 0)
		return ;
	recurse(n / 10);
	n = n % 10;
	if (n < 0)
		n = -n;
	ft_putchar(n + 48);
}

void	ft_putnbr(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
		ft_putchar('-');
	recurse(n);
}
