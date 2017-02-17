#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int x,y,s;
	printf("Enter Two Numbers \n");
	scanf("%d%d",&x,&y);
	s=add(x,y);
	printf("The Sum of two numbers is %d",s);
	return 0;
} 
