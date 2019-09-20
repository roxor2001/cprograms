#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter Cs marks\n");
	scanf("%d",&a);
	printf("Enter Physics marks\n");
	scanf("%d",&b);
	printf("Enter English marks\n");
	scanf("%d",&c);
	printf("Enter Maths marks\n");
	scanf("%d",&d);
	printf("Enter Chem marks\n");
	scanf("%d",&e);
	printf("The avg is=%d\n",(a+b+c+d+e)/5);
	printf("The percentage is =%f",(((a+b+c+d+e)/5)*100));
}
