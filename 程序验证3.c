#include <stdio.h>
int main()
{
    short a=0x253f,b=0x7b7d;
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("d:\\abc1.txt","wb+");
    fp2=fopen("d:\\abc2.txt","wb+");
    fwrite(&a,sizeof(short),1,fp1);
    fwrite(&b,sizeof(short),1,fp2);
    fprintf(fp2,"%d %d",a,b);
    rewind(fp1);rewind(fp2);
    while((ch=fgetc(fp1))!=EOF)
        putchar(ch);
    putchar('\n');
    while((ch=fgetc(fp2))!=EOF)
        putchar(ch);
    putchar('\n');
    fclose(fp1);
    fclose(fp2);
    return 0;
}

