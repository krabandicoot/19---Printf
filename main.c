#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

#define PARAMS	"%", -18

int main()
{
	printf("ft_printf: \n");
	ft_printf("%i\n", ft_printf(PARAMS));
	printf("printf: \n");
	printf("%i\n", printf(PARAMS));
}


// // TEST(1, print(" %u ", 0));
// 	TEST(2, print(" %u ", -1));
// 	TEST(3, print(" %u ", 1));
// 	TEST(4, print(" %u ", 9));
// 	TEST(5, print(" %u ", 10));
// 	TEST(6, print(" %u ", 11));
// 	TEST(7, print(" %u ", 15));
// 	TEST(8, print(" %u ", 16));
// 	TEST(9, print(" %u ", 17));
// 	TEST(10, print(" %u ", 99));
// 	TEST(11, print(" %u ", 100));
// 	TEST(12, print(" %u ", 101));
// 	TEST(13, print(" %u ", -9));
// 	TEST(14, print(" %u ", -10));
// 	TEST(15, print(" %u ", -11));
// 	TEST(16, print(" %u ", -14));
// 	TEST(17, print(" %u ", -15));
// 	TEST(18, print(" %u ", -16));
// 	TEST(19, print(" %u ", -99));
// 	TEST(20, print(" %u ", -100));
// 	TEST(21, print(" %u ", -101));
// 	TEST(22, print(" %u ", INT_MAX));
// 	TEST(23, print(" %u ", INT_MIN));
// 	TEST(24, print(" %u ", LONG_MAX));
// 	TEST(25, print(" %u ", LONG_MIN));
// 	TEST(26, print(" %u ", UINT_MAX));
// 	TEST(27, print(" %u ", ULONG_MAX));
// 	TEST(28, print(" %u ", 9223372036854775807LL));
// 	TEST(29, print(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));