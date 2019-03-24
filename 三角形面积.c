#include<stdio.h>
#include<math.h>
#define s(a,b,c) (((a)+(b)+(c))/2)
#define area(s,a,b,c) (sqrt((s)*((s)-(a))*((s)-(b))*((s)-(c))))
int main(void)
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if((a+b<=c)||(a+c<=b)||(b+c)<=a)
	printf("error!\n");
	else
	printf("the area is:%.2f",area(s(a,b,c),a,b,c));
	return 0;
}

