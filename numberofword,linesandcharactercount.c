#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	int w=1,l=1,c=0,i;
	printf("Enter the string and to terminate it put @ symbol at the end");
	ch=getchar();
	while(ch!='@')
	{
		if(ch==' '||ch=='\n')
		w++;
		if(ch=='\n')
		l++;
		c++;
		ch=getchar();
	}
	
printf("words=%d\tlines=%d\tcharacter.count=%d",w,l,c);
}

