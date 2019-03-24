#include<stdio.h>
#include<string.h>
#define M 10
#define N 10
int main(void)
{
	char a[M+N+10]={0}, * pa=&a[M+N+1];
	char b[M+N+10]={0}, * pb=&b[M+N+1];
	char sum[M+N+10], * ps=&sum[M+N+1];
	int i;
	for(i=1;i<=M+N+1;i++)
	    scanf("%c",&a[i]);
	    getchar();
	for(i=1;i<=M+N+1;i++)
	    scanf("%c",&b[i]);
	    getchar();
	for(i=0;i<=M+N+1;i++)
	    sum[i]='0';
    for(;*pa!='.';pa--)
    {
        if((*pa-'0')+(*pb-'0')+(*ps-'0')>=10)
        {
            *ps=*ps+(*pa-'0')+(*pb-'0')-10;
            if(*(pa-sizeof(char))=='.')
            {
            	*(ps-sizeof(char))='.';
            	*(ps-2*sizeof(char))='1';
			}
			else
               *(ps-sizeof(char))='1';
        }
        else
            *ps=*ps+(*pa-'0')+(*pb-'0');
        pb--;
		ps--;    
    }
    sum[M+1]='.';
    for(i=M;i>=1;i--)
    {
    	if((a[i]-'0')+(b[i]-'0')+(sum[i]-'0')>=10)
    	{
            sum[i]=sum[i]+(a[i]-'0')+(b[i]-'0')-10;
            sum[i-1]='1';
        }
        else
            sum[i]+=(a[i]-'0')+(b[i]-'0');
	}
	if(sum[0]=='1')
	{
		for(i=0;i<=M+N+1;i++)
		  printf("%c",sum[i]);
		printf("\n");
	}
	else
	{
		for(i=1;i<=M+N+1;i++)
		  printf("%c",sum[i]);
		printf("\n");
	}
	return 0;
}
