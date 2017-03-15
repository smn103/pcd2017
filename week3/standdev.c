#include<stdio.h>
#include<math.h>
float sumarray(int n, float *a)
{
	float sum=0.0;
	for(int i=0;i<n;i++,a++)
	{
	sum = sum + *a;
	}
	return sum;
}
float meanarray(int n, int s)
{
	float mean=s/(float)n;
	return mean;
}
float standarddev(int n, float *a,float mean)
{
	float sum1;
	for(int i=0;i<n;i++,a++)
	{
	sum1=sum1+pow((*a-mean),2);
	}
	float var=sum1/(float)n;
	float sd=sqrt(var);
	return sd;
}
int main()
{
	int n;	
	printf("Enter the value of N\n");
	scanf("%d",&n);
	printf("Enter the %d real numbers\n",n);
	float a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%f", a+i);
	}
	float s=sumarray(n,a);
	float m=meanarray(n,s);
	float sd=standarddev(n,a,m);
	printf("Sum of all Elements = %.2f",s);
	printf("\nMean of all Elements = %.2f",m);
	printf("\nStandard Deviation = %.2f\n",sd);
	return 0;
}







