#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char a[40],b[40];
    int i=0,n=0;
    fp=fopen("test2.txt","w");
    gets(a);
    while(*(a+(i++))!='\0');
    i--;
	while(i--)
	    b[n++]=a[i];
	puts(b);
    fputs(b,fp);
    fclose(fp);
    return 0;
}

