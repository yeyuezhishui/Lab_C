#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    char ch;
    FILE *fp;
    if(argc!=3)
	{
        printf("Argument error!\n");
        exit(-1);
    }
    if((fp=fopen(argv[2],"r"))==NULL)
	{
        printf("Can't open %s file!\n",argv[1]);
        exit(-1);
    }
    while((ch=fgetc(fp))!=EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}

