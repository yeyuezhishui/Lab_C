#include<stdio.h>
#include<string.h>
void Put_out(long int);
int main(void)
{
	int n,i;
	scanf("%d",&n);
	long int x[n];
	for(i=0;i<n;i+=1)
	    scanf("%ld",&x[i]);
    for(i=0;i<n;i+=1)
    {
        Put_out(x[i]);
        printf("\n");
    }
    return 0;
}

void Put_out(long int x)
{
    int k;
	char *p=(char*)&x;
	p+=3*sizeof(char);
	char low_half,up_half;
	for(k=0;k<4;k++)
	{
		    low_half=(*p)&0x0f;
		    if(low_half<10)
		        low_half|='0';
		    else
		        low_half=(low_half-10)+'A';
		    up_half=(*p>>4)&0x0f;
		    if(up_half<10)
		        up_half|='0';
		    else
		        up_half=(up_half-10)+'A';
		    p--;
		    printf("%c %c",up_half,low_half);
		    if(k!=3)
		        printf(" ");
    }
}
