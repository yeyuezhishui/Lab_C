#include<stdio.h>
int main(void)
{
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z')          /*����Ƿ��ڴ�д��ĸ��Χ��*/ 
	{
	   printf("%c\n",c+32);
	}
	else if (c>='a'&&c<='z')    /*����Ƿ���Сд��ĸ��*/ 
	{
	   printf("%c\n",c);        /*����Ƿ��������*/ 
	}
	else
    {
	   printf("�������"); 
	}
	return 0;
}
