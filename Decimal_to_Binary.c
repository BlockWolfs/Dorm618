#include "stdio.h"

int D_to_B(int decimal_number)
{
	if(decimal_number > 0) {
		D_to_B(decimal_number/2);
		printf("%d",decimal_number%2);
	}
	return 0;
}

int main(void)
{
	int decimal_number;
	scanf("%d",&decimal_number);
	D_to_B(decimal_number);
	return 0;
}

	
