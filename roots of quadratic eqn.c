#include<stdio.h>
#include<math.h>
int main()
{
	 int A,B,C,X,Y,d,i,root1,root2;
	 printf("enter the coefficient of x*x=");
	 scanf("%d",&A);
	 printf("enter the coefficient of x=");
	 scanf("%d",&B);
	 printf("enter the constant=");
	 scanf("%d",&C);
	 d= B*B-4*A*C;
	 if (d > 0)
	{
		X = (-B+sqrt(d)/(2*A));
		Y = (-B-sqrt(d)/(2*A));
		printf("roots are %d,%d",X,Y);
		
	}
	 else if (d==0)
	{
		X=Y=-B/(2*A);
		printf("roots are %d,%d",X,Y);
		
	}
	 else
	{
		root1 =-B*(2*A);
		root2 = B*(2*A);
		i=sqrt(-d)/(2*A);
		printf("roots=%d,%d",root1,root2);
	}
	
	
}
