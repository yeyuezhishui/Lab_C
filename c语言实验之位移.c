#include <stdio.h>
int main(viod)
{

	unsigned short int x;
	unsigned short int mask2;
	int m,n;
	

	
		scanf("%hd%d%d",&x,&m,&n);
		if(0<=m&&m<=15&&1<=n&&n<=16-m)
		{		              
		    mask2=(~0<<m)&~(~0<<(m+n));         /*�������ʹmλ��m+nλΪ1�����λΪ0*/ 
		    x&=mask2;                           /*���ȡ��*/ 
		    x<<=16-(m+n);                       /*���λ�ƣ�ʹ���������*/ 
		    printf("%d\n",x);		
	    }
	    else
	    printf("�������"); 
	
	return 0;
 } 
