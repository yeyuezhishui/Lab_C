#include<stdio.h>
void PrintPerm(int *a,int n,int m,int cur);
int main(void)
{
	int a[100],n,m;
	printf("请输入数n：");
	scanf("%d",&n); 
	printf("请输入数m："); 
	scanf("%d",&m);
	PrintPerm(a,n,m,0);
	return 0;
}


void PrintPerm(int *a,int n,int m,int cur)
{
	int i,k;
	if(cur==m)
	{
       for(i=0;i<=cur-1;i++) printf("%d ",a[i]);
       printf("\n");   
	}
	   else
	   {
	   	    for(i=1;i<=n;i+=1)
	   	    {
	   		    for(k=0;k<cur;k+=1)
	   		    {
	   			    if(a[k]==i) break;
			    }
			    if(a[k]!=i)
			    { 
			        a[cur]=i;
			        PrintPerm(a,n,m,cur+1);
		        }
		    }
		}
}


