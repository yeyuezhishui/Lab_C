#include <stdio.h>
int main()
{
    float x,*p=&x;
    scanf("%f",p);
    printf("%f\n",*p);
    return 0;
}

