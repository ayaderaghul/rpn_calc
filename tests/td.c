#include "../rpn_calc.h"

void print_array(int *array, int size)
{
    int i;
    i = 0;
    while (i < size)
    {
        printf("%d, ",array[i]);
        ++i;
    }
    printf("\n");
}

int main()
{
	t_operation array[5];
	init((t_operation*)array);
	int narray[5] = {1,2,0,0,0};
	do_op('*',array,narray,1);
	print_array(narray,5);
	return 0;
}
