#include<stdio.h>
#include<math.h>
void main()
{
	float n,r1,r2;
	printf("Enter the Number\n");
	scanf("%f",&n);
	r1=n/2.0;
	r2=n/r1;
	while(fabs(r1-r2)>0.0001)
	{
	r1=(r1+r2)/2.0;
	r2=n/r1;
	}
	printf("The Square Root of %.2f is %.3f",n,r1);
}
