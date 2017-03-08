#include <stdio.h>
void fibonacci(int n)
{
int a=0,b=1,c,count;
printf("The First %d numbers of Fibonacci series are\n",n);
printf("%d ",a);
printf("%d ",b);
count=2;
while(count<n)
{
c=a+b;
count++;
printf("%d ",c);
a=b;
b=c;
}
}
int main()
{
int n;
printf("Enter the value of N \n");
scanf("%d",&n);
fibonacci(n);
return 0;
}
