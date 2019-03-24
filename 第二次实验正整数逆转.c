#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	while(1)
	{
		y=y+x%10;
		x=x/10;
		if(x==0)
		{
			printf("%d",y);
			break;
		}
		else y=y*10;
	}
	return 0;
}

