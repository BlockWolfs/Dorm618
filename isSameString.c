#include <stdio.h>

int main(void)
{
	char str[255];
	char *pstr;
	gets(str);
	pstr = str;
	for (;*pstr!='\0';pstr++)
		printf("%c",*pstr);
	return 0;
}
