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
		m=((n&mask)?1:0);               /*��������ȡ��0λ*/ 
		a=m*(pow(2,(p-1-8*s)))+a;       /*��ѭ������ÿ8λ����ֵ*/ 
		n=n>>1;                    
		if(!(p%8))           
		{
		    printf("%d",a);
	        if(p<25)            
	        printf(".");                /*ÿ�������ֵ���"."����*/ 
		    s+=1;                     
			a=0	;                       /*����s��a�����ԭֵ������һ����λ��ʼ����*/ 
		}
	        p+=1;
		
	}
	    printf("\n"); 
  
    return 0;
}
