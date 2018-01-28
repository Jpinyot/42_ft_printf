/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_unsigned_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:41:06 by jpinyot           #+#    #+#             */
/*   Updated: 2018/01/28 18:48:51 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static uintmax_t	ft_unsigned_int_check_length(uintmax_t num, t_arg *arg)
{
	if (arg->lenght == 104104)
		num = (unsigned char)num;
	else if (arg->lenght == 108108)
		num = (unsigned long long)num;
	else if (arg->lenght == 104)
		num = (unsigned short)num;
	else if (arg->lenght == 108)
		num = (unsigned long)num;
	else if (arg->lenght == 106)
		num = (uintmax_t)num;
	else if (arg->lenght == 122)
		num = (size_t)num;
	else if (arg->lenght == 116)
		num = (ptrdiff_t)num;
	else
		num = (int)num;
	return
		(num);
}

int				conv_unsigned_int(va_list ap, t_arg *arg, int conv)
{
	uintmax_t	num;

	if (arg->precision)
		arg->pad_zero = 0;
	num = va_arg(ap, uintmax_t);
	num = ft_unsigned_int_check_length(num, arg);
	if (arg->prefix > 0)
	{
		if (conv == 'X')
			arg->prefix = 88;
		if (conv == 'x')
			arg->prefix = 120;
	}
	if (conv == 'p')
		arg->prefix = 112;
	return (ft_printf_putuint(num, arg, conv));
}
