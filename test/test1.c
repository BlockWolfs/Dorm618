#include <stdio.h>
#include <string.h>
int main(void )
{
	char str1[255];
	char str2[255];
	char *p;


	gets(str1);
	gets(str2);

	p = strcpy(str1,str2);	
	printf("%s\n",str1);
	printf("%s\n",p);

	return 0;
}
