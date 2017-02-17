#include<stdio.h>
int add(int a, int b, int c)
{
	return a+b+c;
}
int main()
{
	int x,y,z,s;
	printf("Enter Three Numbers \n");
	scanf("%d%d%d",&x,&y,&z);
	s=add(x,y,z);
	printf("The Sum of two numbers is %d",s);
	return 0;
} 
