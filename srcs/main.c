/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:53:38 by jpinyot           #+#    #+#             */
/*   Updated: 2018/01/29 19:59:06 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>
#include <locale.h>
int     main(void)
{
	setlocale(LC_ALL, "");	
//	intmax_t		res = 30000000345;
//	unsigned int	res2 = 320;
//	char			s[] = "Hola primoh como va todo";
//	int				a;
//	wchar_t			wc[50] = L"ឃ  a";
//	ft_putnbr(res);
//	ft_putchar('\n');
//	short w = 21458766755;
	int w = 3625;
//	int w =  4294967295;
	ft_printf("El character es: |%b| o puede ser %k\n", w);
	printf("El character es: |%o| o puede ser\n", w);
	return (0);
}
