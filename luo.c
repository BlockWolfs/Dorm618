
#include <stdio.h>
int main()
{
    char a[1000];
    char b[1000];
    gets(a);
    gets(b);
    char *pa = a;
    char *pb = b;
    int t = 0;
    for(int i = 0;*pb!='\0';pb++,i++){
        if(*pa=='\0'||*(pa++)=='\0'){
            t=i;
            break;
        }
        if(*pb==*pa){
            pa++;
        } else if(*pa!=a[0]){
            pa--;
        }
    }
    printf("\n%d\n",t);
}
