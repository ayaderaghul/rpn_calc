#include "../rpn_calc.h"

int main()
{
	t_operation array[5];
	init((t_operation*)array);
	int i = 0;
	while (i < 5)
	{
		printf("%c\n",array[i].x);
		++i;
	}
	return 0;
}
