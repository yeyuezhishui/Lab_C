#include<stdio.h>
#include<ctype.h>
#define NUMBER 100
int getint(int *pn);
int getint(int *pn)
{
	int c,sign;
	while(isspace(c=getchar()));    /*跳过前导空格*/
	if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-')
	{
		printf("error!\n");
		return 0;
	 } 
	sign=(c=='-')?-1:1;
	if(c=='+'||c=='-')
	  c=getchar();
	for(*pn=0;isdigit(c);c=getchar())
	  *pn=*pn*10+(c-'0');
	*pn*=sign;
	return c;  
}

int main(void)
{
	int a[NUMBER],i,j,k;
	printf("input integers ends with Enter\n");
	for(i=0;i<NUMBER&&(k=getint(&a[i]))!='\n';)
	  if(k)
	  i++;
	for(j=0;j<=i;j++)
	  printf("%8d",a[j]);
	printf("\n");
	return 0;  
}
