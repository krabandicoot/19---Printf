/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:09:33 by kpaux             #+#    #+#             */
/*   Updated: 2022/06/20 16:09:35 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <unistd.h>

# define BASE_HEXA_L		"0123456789abcdef"
# define BASE_HEXA_U		"0123456789ABCDEF"
# define BASE_DECIMAL	"0123456789"

void		ft_putchar(char c, int *arg_len);
void		ft_putstr(char *s, int *arg_len);
size_t		ft_strlen(char *s);
int			ft_printf(const char *conversion, ...);
void		check_conversion(char const *str, va_list arg, int i, int *arg_len);
void		ft_putnbr_base(int n, const char *base, int *arg_len);
void		ft_putnbr_base_unsigned(int n, const char *base, int *arg_len);
void		ft_putnbr_base_ul(unsigned long n, const char *base, int *arg_len);
void		print_str(va_list arg, int *arg_len);
void		print_int(va_list arg, int *arg_len, const char *base);
void		print_u_int(va_list arg, int *arg_len, const char *base);
void		print_hexa(va_list arg, int *arg_len);
void		print_putchar(va_list arg, int *arg_len);
void		print_base(va_list arg, int *arg_len, const char *base);
void		print_ptr(va_list arg, int *arg_len);

#endif
