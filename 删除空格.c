#include <stdio.h>
#include <string.h> 
#define N 80
void DeleteSpace (char *p[],int n);
int main(void)
{
    int i,j,n;
    printf( "input the number(s) of the line(s):\n" );
    scanf("%d",&n);
    n=n+1;
    char a[n][N],*p[n];
    for(i=0;i<n;i++)
	{
        gets(a[i]);
        p[i]=a[i];
    }
    DeleteSpace(p,n);
    return 0;
}

void DeleteSpace(char *p[],int n)
{
     int i,j,k,t;
     for(i=0;i<n;i++)
	 {
        for(j=0;p[i][j]!='\0';j++)
		{
            if(p[i][j]==' '&&p[i][j+1]==' ')
			{
                k=j+1;
                while(p[i][k++]==' ');
                k--;
                t=j+1;
                while(p[i][t++]=p[i][k++]);
            }
        }
        if(strlen(p[i])>0)
		    printf("%s\n",p[i]);
     }
}

