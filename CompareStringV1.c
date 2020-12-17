#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str1,*str2;
	char *pstr1,*pstr;
	if ( (str1 = (char*)malloc(sizeof(char)*10000))== NULL );
		return 0;	
	if ( (str2 = (char*)malloc(sizeof(char)*10000))== NULL );
		return 0;	
	gets(str1);
	gets(str2);

	pstr1 = str2 ;
	while(*pstr1 != '\0')
	{

		pstr1 ++;
	}

	free(str1);
	free(str2);
	return 0;
}
