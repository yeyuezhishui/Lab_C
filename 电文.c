#include<stdio.h>
#define CHANGE 1       /*用#define命令控制是否变换字母的大小改变CHANGE完成*/ 
int main(void)
{
	char c;
	#if CHANGE
	{
		while((c=getchar())!=EOF)
		{
			if(c>='A'&&c<='Z')
			{
				c=c+32;
				putchar(c);
			} 
			else if(c>='a'&&c<='z')
			{
				c=c-32;
				putchar(c);
			}
			else putchar(c);
		}
	}
	#else
	{
		while((c=getchar())!=EOF)
		putchar(c);
	}
	#endif
	return 0;
}

