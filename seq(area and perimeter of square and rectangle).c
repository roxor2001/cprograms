#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the L and B\n");
	scanf("%d%d",&a,&b);
	printf("The perimeter is=%d\n",2*(a+b));
	printf("The area is =%d\n",a*b);
	printf("Now enter the side of square\n");
	scanf("%d",&c);
	printf("The perimeter is =%d\n",4*c);
	printf("The area is =%d",c*c);
	
}
