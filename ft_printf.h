/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:54:33 by albrusso          #+#    #+#             */
/*   Updated: 2022/11/14 17:37:14 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

void	ft_is_c(va_list arg, int *len);

void	ft_is_d_or_i(va_list arg, int *len);

void	ft_is_s(va_list arg, int *len);

void	ft_is_x(va_list arg, int *len, const char format);

void	ft_putchar(char c, int *len);

void	ft_putstr(char *str, int *len);

void	ft_putnbr(long int nbr, int *len);

int		ft_printf(const char *format, ...);

void	ft_is_p(va_list arg, int *len);

void	ft_puthex(unsigned int nbr, char *hex, int *len);

void	ft_putnbru(unsigned int nb, int *len);

void	ft_is_u(va_list arg, int *len);

#endif
