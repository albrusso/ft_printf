/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:48:45 by albrusso          #+#    #+#             */
/*   Updated: 2022/11/14 17:25:14 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_is_s(va_list arg, int *len)
{
	char	*s;
	int		i;

	i = 0;
	s = va_arg(arg, char *);
	if (!s)
		*len += write (1, "(null)", 6);
	while (s[i])
	{
		ft_putchar(s[i], len);
		i++;
	}
}
