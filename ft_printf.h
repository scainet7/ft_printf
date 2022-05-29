/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:54:26 by snino             #+#    #+#             */
/*   Updated: 2021/11/07 18:01:24 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_sort(int c, va_list args);
int		ft_print_c(va_list args);
int		ft_print_s(va_list args);
int		ft_print_p(va_list args);
int		ft_print_id(va_list args);
int		ft_print_u(va_list args);
int		ft_print_xx(int c, va_list args);
int		ft_print_proc(void);
char	*ft_trans_dec(int n);
char	*ft_trans_hex(int n);
char	*ft_trans_add(size_t n);

#endif
