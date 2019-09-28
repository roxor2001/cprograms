#include<stdio.h>
#include<string.h>
int main()
{
char s1;
int cc;
s1=getchar();
while(s1!='@')
{
//if(s1>='a'||s1<='z'||s1==' ')
cc++;
s1=getchar();
}
printf("%d is the number of characters",cc);

}
