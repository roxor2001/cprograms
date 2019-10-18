#include<stdio.h>
int main()
{
	int i,j,p,q,x[2][2]={{1,5},{7,9}},y[2][2]={{1,2},{0,1}},z[2][2]={{0,0},{0,0}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(x[i][j]==y[i][j])
			z[p][q]=x[i][j]+y[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d",z[p][q]);
		
	}



}
