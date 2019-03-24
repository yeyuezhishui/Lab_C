#include<stdio.h>
int BinarySearch(int b[],char name[][25],int want,int q);
int Put_Max_Out(int grade[],char name[][25],int q);
int main(void)
{
	char name[100][25];
	int grade[100],b[100],copy[100];
	int i,p,q,times,num1=0,num2=0,num3=0;
	scanf("%d",&i);
	getchar();
	q=i; times=i;
	while(num1<i)
	{
		scanf("%s%d",name[num1++],&grade[num2]);
		copy[num3++]=grade[num2++];
	}
	while(times)
	{
		times-=1;
		b[times]=Put_Max_Out(grade,name,q);
	}
	printf("\n");
	int i2,i3=0,i4=0,want,wants[100];
	scanf("%d",&i2);
	while(i2--)
		scanf("%d",&wants[i3++]);
	while(i4<i3)
	{
		want=wants[i4++];
	    int command=BinarySearch(b,name,want,q);
	    if(command!=-1)
		{
			int courage;
			for(courage=0;;courage+=1)
			{
				if(copy[courage]==b[command])
				 break;
			}
	       printf("%-20s %d\n",name[courage],copy[courage]);
	   }
	    else
	       printf("Not found!\n");
	}  
	return 0;    
}


int BinarySearch(int b[],char name[][25],int want,int q)
{
	int front=0,back=q-1,middle;
	while(front<=back)
	{
		middle=front+(back-front)/2;
		if(want<b[middle])
		   back=middle-1;
		else if(want>b[middle])
		   front=middle+1;
		else
		   return middle; 
	}
	return -1;
}


int Put_Max_Out(int grade[],char name[][25],int q)
{
	int i,max;
	max=grade[0]; 
	for(i=0;i<q;i+=1)
	{
		if(max<=grade[i])
		   max=grade[i];
	}
	for(i=0;i<q;i+=1)
	{
		if(grade[i]==max)
		{
			grade[i]=0;
			break;
		}
	}
		printf("%-20s %d\n",name[i],max);
		return max;
}
