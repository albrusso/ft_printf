/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_d_or_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:49:54 by albrusso          #+#    #+#             */
/*   Updated: 2022/11/14 17:33:21 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long int nb, int *len)
{
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48, len);
}

void	ft_is_d_or_i(va_list arg, int *len)
{
	long int	n;

	n = (long int) va_arg(arg, int);
	ft_putnbr(n, len);
}
