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
printf("The Reverse of %d is %d",n,revno);
return 0;
}
