#include "../rpn_calc.h"

int main(int ac, char **av)
{
	int r = 0;
	if (ac != 2)
	{
		write(1, "E\n",2);
		return 0;
	}
	int o = 0;
	int n = 0;
	o = operators(av[1]);
	n = numbers(av[1]);
	r = valid(av[1]);
	printf("o: %d n: %d r: %d\n",o,n,r);
	return 0;
}
