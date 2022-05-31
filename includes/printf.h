#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>


int		ft_printf(const char *conversion, ...);
void	check_conversion(char const *str, va_list arg, int i, int *arg_len);
void	print_str(va_list arg, int *arg_len);
void	print_u_int(va_list arg, int *arg_len);
void	print_hexa(va_list arg, int *arg_len);
void	print_putchar(va_list arg, int *arg_len);


#endif