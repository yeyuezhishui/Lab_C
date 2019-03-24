#include<stdio.h>
int main(void)
{
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z')          /*¼ì²âÊÇ·ñÔÚ´óÐ´×ÖÄ¸·¶Î§ÄÚ*/ 
	{
	   printf("%c\n",c+32);
	}
	else if (c>='a'&&c<='z')    /*¼ì²âÊÇ·ñÔÚÐ¡Ð´×ÖÄ¸ÄÚ*/ 
	{
	   printf("%c\n",c);        /*¼ì²âÊÇ·ñÊäÈë´íÎó*/ 
	}
	else
    {
	   printf("ÊäÈë´íÎó£¡"); 
	}
	return 0;
}
