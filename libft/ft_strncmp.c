/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:11:05 by snino             #+#    #+#             */
/*   Updated: 2021/10/24 10:38:56 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[i] != '\0' || str2 [i] != '\0') && (i < n))
	{
		if ((str1[i] > str2[i]) || (str1[i] < str2[i]))
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
