#include <stdio.h>
int main(void)
{ 
  int i,n,s=1;
  printf("Please enter n:");
  scanf("%d",&n);
  while(i<n)
  {
  	i++;
  	s=s*i;
  }    
  printf("%d! = %d",n,s);
}

