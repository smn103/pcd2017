#include<stdio.h>
#include<math.h>
unsigned int rightshift(unsigned int x, int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if (x%2==0)
		{
			x=x>>1;
		}
		else
		{
		x=x>>1;
		x=x+(1<<31);//The Same as 2^31
		}
	}
	return x;
}
int main()
{
unsigned int x,n,result;
printf("Enter the Number to be rotated\n");
scanf("%d",&x);
printf("Enter the Number of Positions by which the Number should be Rotated\n");
scanf("%d",&n);
result=rightshift(x,n);
printf("The Number %d after being rotated %d times is %d",x,n,result);
return 0;
}

	
