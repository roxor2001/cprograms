#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the numbers");
	scanf("%d%d",&a,&b);
	printf("The number before swapping= %d %d\n",a,b);
	temp=a; 
	a=b;
	b=temp; 
    printf("The numbers after swapping= %d %d\n",a,b);
}
