#include<stdio.h>
int main()
{
	int q,w,e;
	printf("enter three numbers\n ");
	scanf("%d%d%d",&q,&w,&e);
	if(q>w && q>e)
	printf("greatest number is %d",q);
	else if (w>q&&w>e)
	printf("greatest number is %d",w);
	else
	printf("greatest number is %d",e);
}
