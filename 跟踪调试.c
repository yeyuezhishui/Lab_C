#include<stdio.h>
void istrcpy(char *, char*);
int main(void) 
{
  char a[60], b[60] = "there is a boat on the lake.";
  istrcpy(a,b);
  printf("%s\n",a);
  return 0;
}

void istrcpy(char *s, char *t)
{
  while(*s++ = *t++);
}

