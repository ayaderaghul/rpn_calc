#include "../rpn_calc.h"

int main()
{
	char c = '*';
	t_operation array[5];
	init((t_operation*)array);
	int k = 0;
	while (k < 5)
	{
		printf("%d\n",		ft_compare(c, array[k].x));
		++k;
	}
	return 0;
}
