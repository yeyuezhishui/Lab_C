#include <stdio.h>
int main(void)
{ 
  int i,n,s=1;
  printf("Please enter ����S:");
  scanf("%d",&n);
  i=0;
  do
  {i++;s=s*i;}
  while(s<n);  
  printf("����n����S����С����n=%d",i);
}

