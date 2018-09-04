#include "../rpn_calc.h"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1,"E\n",2);
		return 0;
	}
	t_operation array[5];
	init((t_operation*)array);
	if(valid(av[1]) == 1)
	{
		int r = 0;
		r = evaluate(av[1],array);
		printf("%d\n",r);
	}
	else
		write(1,"E\n",2);
	return 0;

}
