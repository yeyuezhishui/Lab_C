#include<stdio.h>
#define CHANGE 1       /*��#define��������Ƿ�任��ĸ�Ĵ�С�ı�CHANGE���*/ 
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

