/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:53:05 by albrusso          #+#    #+#             */
/*   Updated: 2022/11/14 17:37:36 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex1(unsigned long long nbr, char *hex, int *len)
{
	if (nbr >= 16)
	{
		ft_puthex1(nbr / 16, hex, len);
		ft_putchar(hex[nbr % 16], len);
	}
	if (nbr < 16)
	{
		ft_putchar(hex[nbr], len);
	}
}

void	ft_is_p(va_list arg, int *len)
{
	unsigned long	c;

	c = va_arg(arg, unsigned long);
	if (!c)
		*len += write (1, "(nil)", 5);
	else
	{
		*len += write (1, "0x", 2);
		ft_puthex1(c, "0123456789abcdef", len);
	}
}
