#include <stdio.h>
#include <string.h>
int main(void )
{
	char str1[255];
	char str2[255];
	gets(str1);
	gets(str2);
	if(!strcmp(str1,str2))
		printf("they are same.");
	else
		printf("theyn't are same.");


	return 0;
}
