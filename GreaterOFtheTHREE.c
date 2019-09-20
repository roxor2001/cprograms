#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    printf("%d is greatest of the 3",a);
	else if(b>c)
	printf("%d is greatest of the 3",b);
    else
	printf("%d is greatest of the 3",c);
}
