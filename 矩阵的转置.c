#include<stdio.h>
int main(void)
{
	int matrix[3][4];
	int i1,i2;
	for(i1=0;i1<3;i1+=1)
	{
		for(i2=0;i2<4;i2+=1)
			scanf("%d",&matrix[i1][i2]);
		getchar();	
	}
	int trans[4][3];
	for(i1=0;i1<4;i1+=1)
	{
		for(i2=0;i2<3;i2+=1)
		    trans[i1][i2]=matrix[i2][i1];
	}
	for(i1=0;i1<3;i1+=1)
	{
		for(i2=0;i2<4;i2+=1)
		    printf("%5d",matrix[i1][i2]);
		printf("\n");    
	}
	printf("\n");
	for(i1=0;i1<4;i1+=1)
	{
		for(i2=0;i2<3;i2+=1)
		    printf("%5d",trans[i1][i2]);
		printf("\n");    
	}
	return 0;
}
