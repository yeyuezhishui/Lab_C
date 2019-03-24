#include <stdio.h>
int main(viod)
{

	unsigned short int x;
	unsigned short int mask2;
	int m,n;
	

	
		scanf("%hd%d%d",&x,&m,&n);
		if(0<=m&&m<=15&&1<=n&&n<=16-m)
		{		              
		    mask2=(~0<<m)&~(~0<<(m+n));         /*设计掩码使m位到m+n位为1其余各位为0*/ 
		    x&=mask2;                           /*完成取整*/ 
		    x<<=16-(m+n);                       /*完成位移，使编码左对齐*/ 
		    printf("%d\n",x);		
	    }
	    else
	    printf("输入错误！"); 
	
	return 0;
 } 
