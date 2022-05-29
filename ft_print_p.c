/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:01:37 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 14:41:51 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(va_list args)
{
	int		res;
	size_t	add;
	char	*var;

	add = va_arg(args, size_t);
	var = ft_trans_add(add);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(var, 1);
	res = (ft_strlen(var) + 2);
	free(var);
	return (res);
}
