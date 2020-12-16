#include "stdio.h"

int D_to_B(int decimal_number)
{
	if(decimal_number > 0) {
		D_to_B(decimal_number/2);
		printf("%d",decimal_number%2);
	}
	return 0;
}

int O_to_H(int octal_number)
{
	int addition=0,power=1;
	addition = octal_number%10*power;
	octal_number /= 10;
	while( octal_number != 0)
	{
		power *= 8;
		addition += octal_number%10*power;
		octal_number /= 10;

	}
	printf("The hexadecimal numbe is %X",addition);
}

int main(void)
{
	//int decimal_number;
	//scanf("%d",&decimal_number);
	//D_to_B(decimal_number);
	
	int octal_number;
	scanf("%d",&octal_number);
	O_to_H(octal_number);

	return 0;
}

	
