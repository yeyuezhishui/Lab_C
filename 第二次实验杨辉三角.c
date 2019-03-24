#include<stdio.h>
int main()
{
    printf("杨辉三角行图形如下:\n\n");	
	int a[10][10],i,j; 
	for(i=0;i<10;i++) 
	{	
	    for(j=10;j>=i;j--) printf("  "); 
		for(j=0;j<=i;j++) 
        {
		    if(i==j||j==0) a[i][j]=1; 
            else a[i][j]=a[i-1][j]+a[i-1][j-1]; 
	        printf("%3d ",a[i][j]); 
        } 
        printf("\n");
	} 
	return 0; 
}

