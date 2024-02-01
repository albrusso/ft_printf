/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_x_or_X.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:24:56 by albrusso          #+#    #+#             */
/*   Updated: 2022/11/14 17:37:08 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char *hex, int *len)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, hex, len);
		ft_putchar(hex[nbr % 16], len);
	}
	if (nbr < 16)
		ft_putchar(hex[nbr], len);
}

void	ft_is_x(va_list arg, int *len, const char format)
{
	unsigned long	nbr;

	nbr = va_arg(arg, unsigned long);
	if (format == 'x')
		ft_puthex(nbr, "0123456789abcdef", len);
	else
		ft_puthex(nbr, "0123456789ABCDEF", len);
}
