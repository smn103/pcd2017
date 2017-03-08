#include<stdio.h>
int revint(int n)
{
int revno=0;
while(n!=0)
{
revno=revno*10;
revno=revno+n%10;
n=n/10;
}
return revno;
}
int main()
{
int n,revno;
printf("Enter the Number\n");
scanf("%d",&n);
revno=revint(n);
if(revno==n)
{
printf("%d is a Palindrome Number",n);
}
else
{
printf("%d is not a Palindrome Number",n);
}
return 0;
}
