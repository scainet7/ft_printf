/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:10:23 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 18:05:52 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort(int c, va_list args)
{
	int	res;

	res = 0;
	if (ft_strchr("c", c))
		res = ft_print_c(args);
	else if (ft_strchr("s", c))
		res = ft_print_s(args);
	else if (ft_strchr("p", c))
		res = ft_print_p(args);
	else if (ft_strchr("i", c))
		res = ft_print_id(args);
	else if (ft_strchr("d", c))
		res = ft_print_id(args);
	else if (ft_strchr("u", c))
		res = ft_print_u(args);
	else if (ft_strchr("x", c))
		res = ft_print_xx(c, args);
	else if (ft_strchr("X", c))
		res = ft_print_xx(c, args);
	else if (ft_strchr("%", c))
		res = ft_print_proc();
	return (res);
}
