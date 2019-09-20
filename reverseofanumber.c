#include<stdio.h>
int main()
{
	int i,n,z,rem,rev;
	printf("Enter the number");
	scanf("%d",&n);
	n=z;
	for(i=0;i<=n;i++)
	{
		rem=z%10;
		rev=rev*10;
		rev=rev+(n%10);
	}
printf("%d",rev);
}
