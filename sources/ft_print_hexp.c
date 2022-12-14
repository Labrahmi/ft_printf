/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:03:26 by ylabrahm          #+#    #+#             */
/*   Updated: 2022/10/25 00:44:10 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_hexp(unsigned long ul, int *ip)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (ul < 16)
	{
		*ip += ft_print_char(hex[ul]);
	}
	else
	{
		ft_print_hexp(ul / 16, ip);
		ft_print_hexp(ul % 16, ip);
	}
}
