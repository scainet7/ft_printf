/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trans_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:08:31 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 16:22:19 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_num(unsigned int n)
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

char	*ft_trans_hex(int n)
{
	int				i;
	unsigned int	num;
	char			*buffer;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	num = (unsigned int)n;
	buffer = (char *)ft_calloc(ft_count_num(num) + 1, sizeof(char));
	if (!buffer)
		return (0);
	else if (n == 0)
		buffer[0] = '0';
	i = ft_count_num(num) - 1;
	while (num)
	{
		buffer[i] = hex[num % 16];
		num /= 16;
		i--;
	}
	return (buffer);
}
