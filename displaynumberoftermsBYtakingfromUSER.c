#include<stdio.h>
int main()
{
	int i,N,a;
	printf("Enter the number of times loop should execute");
	scanf("%d",&N);
	printf("\n Enter the numbers");
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a);
		printf("%d",a);
	}
		
}
