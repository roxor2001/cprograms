#include<stdio.h>
int main()
{
 int  i,n,m,j,sum=0;
 printf("Enter 1st number");
 scanf("%d",&m);
 printf("Enter 2nd number");
 scanf("%d",&n);
 for(i=m;i<=n;i++)
{
sum=0;
 for(j=1;j<i;j++)
{
 if(i%j==0)
 sum=sum+j;
 //printf("i= %d \t j= %d\n",i,j);
 //printf("\n%d",sum);
}
 if(i==sum)
 printf("%d\n",i);
}
return 0;
}
