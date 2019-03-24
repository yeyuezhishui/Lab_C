#include<stdio.h>
#define SUM(a,b) a+b
#define DIF(a,b) a-b
#define SWAP(a,b)  a=b,b=a
int main(void)
{
    int a,b,t;
    printf("Input two integers a, b:");
    scanf("%d%d",&a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM(a,b),SUM(a,b)*DIF(a,b));
    SWAP(a,b);    
	printf("\nNow a=%d,b=%d\n",a,b);
	return 0;
}

