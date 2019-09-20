#include<stdio.h>
int main()
{
	int i,factors,n,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		factors=n%i;
		if(n%i==0)
		{
		 sum=sum+i;
	    }
	}
 if(sum=n)
 printf("the number is perfect"
 ); 
}
