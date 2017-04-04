#include<stdio.h>
int revint(int num)
{
int revno=0;
while(num!=0)
{
revno=revno*10;
revno=revno+num%10;
num=num/10;
}
return revno;
}
int main()
{
int num,revno;
printf("Enter the Number\n");
scanf("%d",&num);
revno=revint(num);
if(revno==num)
{
printf("%d is a Palindrome Number",num);
}
else
{
printf("%d is not a Palindrome Number",num);
}
return 0;
}
