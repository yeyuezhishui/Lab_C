#include<stdio.h>
#include<string.h>
#include<math.h> 
void Put_Binary(int ns,char digit[]);
void plus1(char digit[],char digits,int i);
int main(void)
{
	int ns[100];
	char digit[100];
	int n,ans=0,i;
	scanf("%d",&n);
    Put_Binary(n,digit);
	return 0;	
}

void Put_Binary(int ns,char digit[])
{
	int n;
	for(n=0;n<8*sizeof(int);n+=1)
	  digit[n]='0';
	if(ns<0)
	  digit[0]='1';
	else
	  digit[0]='0';
	int i=fabs(ns);
	while(i!=0)
	{
		if(i%2==0)
		  digit[--n]='0';
		else
		  digit[--n]='1';
		i/=2;
	}
	if(ns<0)
	{
		for(i=1;i<8*sizeof(int);i+=1)
		{
			if(digit[i]=='0')
			  digit[i]='1';
			else
			  digit[i]='0';
		}
		i=sizeof(int)*8-1;
		plus1(digit,digit[i],i);
	}
	for(n=0;n<8*sizeof(int);n+=1)
	  printf("%c",digit[n]);
	  printf("\n");    
}

void plus1(char digit[],char digits,int i)
{
	if(digits=='0')
	   digit[i]='1';
	else
	{
		digit[i]='0';
		i-=1;
		plus1(digit,digit[i],i);
	}   
}
