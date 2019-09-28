#include<stdio.h>
int main()
{
  float sum=0,a[5],avg;
  int c=0,i;
  printf("Enter array elements\n");
  for(i=0;i<5;i++)
  {
    scanf("%f",&a[i]);
    sum=sum+a[i];
    c++;
  }
printf("sum=%f\n",sum);
printf("c=%d\n",c);
avg=sum/c;
printf("%f",avg);
for(i=0;i<5;i++)
{
  if(avg<a[i])
  printf("This element %f is greater than avg\n",a[i]);
}
}
