#include <stdio.h>
#include <string.h>

int main(void)
{
	char * address = 0 ;
	char str[255]="hello world";
	address = strchr(str,'l');
	printf(" address is %c " , *address );


	return 0;

}

