#include "../rpn_calc.h"

int main()
{
	char *str = "-1";
	char *str2 = "10 ";
	int r = is_it_number(str);
	int r2 = is_it_number(str2);
	printf("-1: %d, 10: %d\n",r,r2);
	char *str3 = "-1 10 *";
	int n = numbers(str3);
	printf("n: %d\n",n);
	return 0;
}
