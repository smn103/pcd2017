#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float sqroot(float n)
{
	int i=1;
	float a,b;
	while((i*i)<n)
	{
	i++;
	a=(i+i-1)/2.0;
	do
	{
		b=n/a;
		a=(a+b)/2;
	}while(fabs(a-b)>0.0001);
	}
return a;
}
int main()
{
	float n,sq;
	printf("Enter a Number\n");
	scanf("%f",&n);
	if(n<0)
	{
		n=abs(n);
		sq=sqroot(n);
		printf("The Square Root of -%.2f is %.3fi",n,sq);
	}
	else
	{
		sq=sqroot(n);
		printf("The Square Root of %.2f is %.3f",n,sq);
	}
	return 0;
}

