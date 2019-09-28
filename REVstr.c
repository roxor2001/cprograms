#include<stdio.h>
#include<string.h>
int main()
{
  char a[10]="Rohit";
  int j,i=strlen(a);
  for(j=i;j>=0;j--)
  {
    printf("%c",a[j]);
  }
}
