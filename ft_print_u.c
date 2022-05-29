/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:00:46 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 15:31:34 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(va_list args)
{
	int		res;
	char	*str;

	str = ft_trans_dec(va_arg(args, int));
	ft_putstr_fd(str, 1);
	res = ft_strlen(str);
	free(str);
	return (res);
}
