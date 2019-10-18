#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("The numbers before swapping = %d %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
    printf("The number after swapping = %d %d\n",a,b);
}
