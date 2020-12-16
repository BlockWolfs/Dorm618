#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[10000];
	char str2[10000];
	char * pstr1,*pstr2,*pointer_tmp;
	int address = 0;
	int len = 0, len_record = 0;
	int flag = 0;
	pstr1 = str1;
	pstr2 = str2;

	gets(str1);
	gets(str2);
	
	len = strlen(str1);
	for ( ; *pstr2 != '\0' ; pstr2 ++ ) {
		len_record = 0;	
		for ( pstr1 = str1 , pointer_tmp = pstr2 ; len_record<len && *pstr1 != '\0' && *pointer_tmp != '\0' ; pointer_tmp ++ , pstr1 ++ ) {
		
		if( *pstr1 == *pointer_tmp )
			len_record ++;
		else
			break;
		}
		if( len == len_record)
		{
			printf("%d ",address);
			flag = 1;
		}
		address ++;
	}
	if(flag!=1)
		printf("-1");
	return 0;
}
