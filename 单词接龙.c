#include<stdio.h>
int Find_Len(char a[][100]); 
int main(void)
{
	int n,i,len;
	scanf("%d",&n);
	char a[n][100];
	for(i=0;i<n;i++)
      	scanf("%s",a[i]);    
	int k;
	for(k=1;k<n;k++)
	{
		len=Find_Len(a);
		int p,q=0;
	    if(a[k][0]==a[0][len-1])
	    {
	        for(p=len;a[k][q]!='\0';p++)
	          a[0][p]=a[k][++q];
	        a[0][p+1]='\0';
	        k=1;
	    }
	} 
	printf("%s",a[0]);
	return 0;
}
int Find_Len(char a[][100])
{
	int i;
	for(i=0;;i++)
	{
		if(a[0][i]=='\0')
	       break;
	}
	return i;
}
