#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <unistd.h>

void		ft_putchar(char c, int *arg_len);
void		ft_putstr(char *s, int *arg_len);
size_t		ft_strlen(char *s);
int			ft_printf(const char *conversion, ...);
void		check_conversion(char const *str, va_list arg, int i, int *arg_len);
void 		ft_putnbr_base(int n, char *base, int *arg_len);
void		ft_putnbr_base_ul(unsigned long n, char *base, int *arg_len);
void		print_str(va_list arg, int *arg_len);
void		print_int(va_list arg, int *arg_len);
void		print_u_int(va_list arg, int *arg_len);
void		print_hexa(va_list arg, int *arg_len);
void		print_putchar(va_list arg, int *arg_len);
void		print_base(va_list arg, int *arg_len, const char *str);
void		print_ptr(va_list arg, int *arg_len);

#endif