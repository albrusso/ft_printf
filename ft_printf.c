/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:13:06 by albrusso          #+#    #+#             */
/*   Updated: 2022/11/14 17:37:23 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_type(va_list arg, const char format, int *len)
{
	if (format == 'c')
		ft_is_c(arg, len);
	else if (format == 's')
		ft_is_s(arg, len);
	else if (format == 'd' || format == 'i')
		ft_is_d_or_i(arg, len);
	else if (format == 'x' || format == 'X')
		ft_is_x(arg, len, format);
	else if (format == 'p')
		ft_is_p(arg, len);
	else if (format == 'u')
		ft_is_u(arg, len);
	else if (format == '%')
	{
		write (1, "%", 1);
		len += 1;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;
	int		i;

	i = 0;
	va_start(arg, format);
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_type(arg, format[i + 1], &len);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		if (!format[i])
		{
			len += write (1, "(nil)", 6);
			break ;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
