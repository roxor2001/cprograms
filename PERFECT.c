#include<stdio.h>
int main()
{
int i,j,sum=0;
scanf("%d",&i);
for(j=1;j<i;j++)
{
if(i%j==0)
sum=sum+j;
}
if(i==sum)
printf("%d\n",i);
}
