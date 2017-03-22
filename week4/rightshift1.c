#include<stdio.h>

void display(unsigned int );
unsigned int rightshift(unsigned int x, unsigned int n)
{
	printf("Original number:	");
	printf("\t\t%u\t\t:", x);
	display(x);
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		if(x%2==0)
		{
			x=x>>1;
		}
		else
		{
			x=x>>1;
			x=x+(1<<31);
		}
	
		printf("After %d rotation:	", i);
		printf("\t%u\t\t:", x);
		
		display(x);
		printf("\n");
	}
return x;
}
int main()
{
	unsigned int x,n,result;
	printf("enter x:\n");
	scanf("%u",&x);
	printf("enter the number of times x should be rotated\n");
	scanf("%u",&n);
	result=rightshift(x,n);
	printf("result is %u \n", result);
}

void display(unsigned int x)
{
	int a[32], i;
	for(i=0;i<32;i++)
	{
		a[i] = 0;
	}
	i = 31;
	
	while(x!=0)
	{
		if(x%2==0)
			a[i] = 0;
		else
			a[i] = 1;
			
		x = x>>1;
		i--;
	}
	
	for(i=0;i<32;i++)
	{
		printf("%d", a[i]);
	}
	
	
}
