#include<stdio.h>
int a[100];
void getarray(int n)
{
printf("Enter the Values of the coefficients\n");
for(int i=n;i>=0;i--)
{
scanf("%d",&a[i]);
}
}
int poly(int n)
{
int x,s=0;
printf("Enter the Value of X\n");
scanf("%d",&x);
for(int i=n;i>0;i--)
{
s=(s+a[i])*x;
}
s=s+a[0];
return s;
}
int main()
{
int n,sum;
printf("Enter the Degree of the Polynomial\n");
scanf("%d",&n);
getarray(n);
sum=poly(n);
printf("The Value of the Polynomial is %d",sum);
return 0;
}


