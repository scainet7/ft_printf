/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trans_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:08:30 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 16:07:57 by snino            ###   ########.fr       */
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
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_trans_dec(int n)
{
	unsigned int	num;
	int				i;
	char			*str;

	num = (unsigned int)n;
	str = (char *)ft_calloc(ft_count_num(num) + 1, sizeof(char));
	if (!str)
		return (0);
	else if (n == 0)
		str[0] = '0';
	i = ft_count_num(num) - 1;
	while (num)
	{
		str[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	return (str);
}
