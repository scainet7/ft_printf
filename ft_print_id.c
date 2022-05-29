/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:44:08 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 14:50:57 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_id(va_list args)
{
	int		res;
	char	*str;

	str = ft_itoa(va_arg(args, int));
	ft_putstr_fd(str, 1);
	res = ft_strlen(str);
	free(str);
	return (res);
}
