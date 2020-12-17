#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char str1[255];
	char str2[255];

	gets(str1);
	gets(str2);

	//get string length
	int len = strlen(str1);
	printf("length = %d",str1);

	//compare string ,same string return 0 , or return 1
	if(!strcmp(str1,str2)
		printf("they are same.");
	else
		printf("theyn't are same.");

	//concatenated string
	//strcpy()
	
	//strchr: charcter of address
	int address = strchr("hello",'l');
	printf("%d",address);
	

	



	return 0;
}
