/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trans_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:41:40 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 16:07:28 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_num(size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*ft_trans_add(size_t n)
{
	int		i;
	char	*buffer;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	buffer = (char *)ft_calloc(ft_count_num(n) + 1, sizeof(char));
	if (!buffer)
		return (0);
	else if (n == 0)
		buffer[0] = '0';
	i = ft_count_num(n) - 1;
	while (n)
	{
		buffer[i] = hex[n % 16];
		n /= 16;
		i--;
	}
	return (buffer);
}
