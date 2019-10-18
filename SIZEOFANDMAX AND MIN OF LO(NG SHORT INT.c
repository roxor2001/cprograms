#include<stdio.h>
#include<limits.h>
int main()
{
	short int x;
	int y;
	long int z;
	printf("short int : memory=%d min=%d max=%d\n",sizeof(x),SHRT_MIN,SHRT_MAX);
	printf("int memory=%d min=%d max=%d\n",sizeof(y),INT_MIN,INT_MAX);
	printf("long int : memory=%d min=%d max=%d\n",sizeof(z),LONG_MIN,LONG_MAX);
}
