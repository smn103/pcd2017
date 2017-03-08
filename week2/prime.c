#include <stdio.h>
int prime(int n)
{
int i,c=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
return c;
}
int main()
{
int n,c;
printf("Enter the Number\n");
scanf("%d",&n);
c=prime(n);
if (c>2)
printf("%d is not a prime number",n);
else
printf("%d is a prime number",n);
return 0;
}
    
    

