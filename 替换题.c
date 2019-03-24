#include<stdio.h>
#define sum (d+e)
#define max(a,b,c) ((a)>(b)?(a>c?a:c):(b>c?b:c))
int main(void)
{
    int a, b, c;
    float d, e;
    printf("Enter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nthe maximum of them is %d\n",max(a,b,c));
    printf("Enter two floating point numbers:");
    scanf("%f%f",&d,&e);
    printf("\nthe sum of them is  %f\n",sum);
    return 0; 
}

