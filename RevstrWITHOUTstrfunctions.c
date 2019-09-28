#include<stdio.h>
int main()
{
   char s1[10];
   int n,i;
   printf("Enter n");
   scanf("%d",&n);
   printf("Enter sting");
   for(i=0;i<n;i++)
   {
   scanf("%c",&s1[i]);
   }
   for(i=n;i>=0;i--)
   {
   printf("%c",s1[i]);
   }
}
