#include<stdio.h>
int leap(int year)
{
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
{
return 0;
}
else
{
return 1;
}
}
else
{
return 2;
}
}
else
{
return -1;
}
}
int main()
{
int year;
printf("Enter the Year\n");
scanf("%d",&year);
int y=leap(year);
switch(y)
{
case -1:printf("%d is not a leap year",year);
	break;
case 0:printf("%d is a leap year",year);
	break;
case 1:printf("%d is a century year & not a leap year",year);
	break;
case 2:printf("%d is a leap year",year);
	break;
default:break;
}
return 0;
}

