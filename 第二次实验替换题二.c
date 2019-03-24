#include <stdio.h>
int main(void)
{ 
  int i,n,s=1;
  printf("Please enter n:");
  scanf("%d",&n);
  i=0;
  do
  {i++;s=s*i;}
  while(i<n);   
  printf("%d! = %d",n,s);
}

