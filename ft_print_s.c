/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:30:31 by snino             #+#    #+#             */
/*   Updated: 2021/11/05 19:44:22 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(va_list args)
{
	int		res;
	char	*str;

	res = 0;
	str = va_arg(args, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		res = 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		res = ft_strlen(str);
	}
	return (res);
}
