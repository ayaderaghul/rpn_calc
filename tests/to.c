#include "../rpn_calc.h"

int main()
{
	char *str = "-1";
	char *str2 = "*";
	int r = is_it_operator(str);
	int r2 = is_it_operator(str2);
	printf("-1: %d, *: %d\n",r,r2);
	char *str3 = "-1 *";
	int o = operators(str3);
	printf("o: %d\n",o);
	return 0;
}
