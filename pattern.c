#include<stdio.h>
int main()
{
  int i,j,n,k=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=i;j<=n+i;j++)
  {
    printf("%d\t",j);
  }
  printf("\n");

}
return 0;
}
