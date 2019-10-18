#include<stdio.h>
int main()
{
	int n,x,rem,rev=0;
	printf("enter n value");
	scanf("%d",&x);
	n=x;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("reverse=%d\n",rev);
}
