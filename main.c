#include "includes/ft_printf.h"
#include <stdio.h>
#define PARAMS1	"| %s |\n", "oui"
/*#define PARAMS2 "| %%%% |\n"
#define PARAMS3 "| %% %% %% |\n"
#define PARAMS4 "| %%  %%  %% |\n|"
#define PARAMS5 "| %%   %%   %% |\n"
#define PARAMS6 "|%%|"*/
int main()
{
	int a;
	int b;

	printf("ft_printf :\n");
	a = ft_printf(PARAMS1);
	printf("%i\nprintf :\n", a);
	b = printf(PARAMS1);
	printf("%i\n", b);
}