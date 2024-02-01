/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:47:46 by albrusso          #+#    #+#             */
/*   Updated: 2022/11/16 12:14:16 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	*len += write (1, &c, 1);
}

void	ft_is_c(va_list arg, int *len)
{
	int	c;

	c = va_arg(arg, int);
	ft_putchar(c, len);
}
