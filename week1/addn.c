#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int a,n,s=0;
	printf("Enter The Number of Numbers to be Added \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	printf("Enter the Number \n");
	scanf("%d",&a);
	s=add(s,a);
	}
	printf("The Sum of %d",n);
	printf("numbers is %d",s);
	return 0;
} 
