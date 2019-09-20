#include<stdio.h>
int main()
{
	int i,j,n,fact=1;
	float sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
	    sum=sum+(float)1/fact;
	}
	printf("%f",sum);
	return(0);
}
