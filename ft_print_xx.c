/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:59:49 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 16:24:13 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_xx(int c, va_list args)
{
	int		res;
	int		i;
	char	*str;

	i = 0;
	str = ft_trans_hex(va_arg(args, int));
	if (c == 'X')
	{
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
		i = 0;
	}
	ft_putstr_fd(str, 1);
	res = ft_strlen(str);
	free(str);
	return (res);
}
