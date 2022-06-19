#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

#define PARAMS1	"| %d |\n", INT_MIN
/*#define PARAMS2 "| %%%% |\n"
ç "| %% %% %% |\n"
#define PARAMS4 "| %%  %%  %% |\n|"
#define PARAMS5 "| %%   %%   %% |\n"
#define PARAMS6 "|%%|"*/
int main()
{
	int a;
	int b;

	printf("ft_printf :\n");
	a = ft_printf(PARAMS1);
	ft_printf("%i\nprintf :\n", a);
	b = printf(PARAMS1);
	printf("%i\n", b);
}


// TEST(1, print(" %u ", 0));
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