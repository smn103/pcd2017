#include <stdio.h>
typedef struct complex
{
	float real;
    float imag;
}complex;
complex add(complex n1,complex n2);
int main()
{
    complex n1,n2,temp;
    int n;
	printf("Enter the Number of Complex Numbers to be added \n");
    scanf("%d",&n);
    n1.real=0.0;
    n1.imag=0.0;
    temp=n1;
    for(int i=1;i<=n;i++)
    {
    printf("Enter the real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);
	temp = add(temp, n2);
	}
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);
	return 1;
}
complex add(complex n1, complex n2)
{
	complex temp;
	temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
	return(temp);
}
