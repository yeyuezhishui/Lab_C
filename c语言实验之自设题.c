#include <stdio.h>
int main(void)
{
	int a,b,c;
	c=1;
	scanf("%d %d",&a,&b);
	while(!(!(c%b)&&!(c%a)))
	{
	  c+=1;
	}
	printf("%d",c);
	return 0;
	
	
}
