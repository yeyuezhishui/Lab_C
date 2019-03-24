#include <stdio.h>
int main(void)
{ 
  int i,n,s=1;
  printf("Please enter 整数S:");
  scanf("%d",&n);
  i=0;
  do
  {i++;s=s*i;}
  while(s<n);  
  printf("满足n！≥S的最小整数n=%d",i);
}

