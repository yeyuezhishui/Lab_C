#include<stdio.h>
#include<math.h>
int main(void)
{
    unsigned int mask;
	mask=1;                
    unsigned int n;
    int a=0;                 
	scanf("%ud",&n);
	int m;
	int s=0,p=1;          
	while (p<=32)                
	{
		m=((n&mask)?1:0);               /*利用掩码取第0位*/ 
		a=m*(pow(2,(p-1-8*s)))+a;       /*外循环计算每8位的数值*/ 
		n=n>>1;                    
		if(!(p%8))           
		{
		    printf("%d",a);
	        if(p<25)            
	        printf(".");                /*每次输出数值后加"."符号*/ 
		    s+=1;                     
			a=0	;                       /*利用s与a，清空原值，从下一个八位开始运算*/ 
		}
	        p+=1;
		
	}
	    printf("\n"); 
  
    return 0;
}
