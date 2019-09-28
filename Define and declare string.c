#include<stdio.h>
int main()
{
  char a;
 printf("Start typing and to terminate program type @ at the end");
  a=getchar();
  while(a!='@')
  {
    a=getchar();
  }
}
