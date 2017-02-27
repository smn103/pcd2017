#include<stdio.h>
struct complex
{
float real;
float imag;
};
struct complex getcomplex()
{
struct complex c;
printf("Enter real and imaginary part respectively \n");
scanf("%f%f",&c.real,&c.imag);
return c;
}
struct complex add(struct complex x, struct complex y)
{
struct complex c;
c.real=x.real+y.real;
c.imag=x.imag+y.imag;
return c;
}
void printcomplex(struct complex c)
{
printf("Sum of two Complex Numbers = ");
printf("%.1f + %.1fi",c.real,c.imag);
}
int main()
{
struct complex a;
struct complex b;
struct complex c;
a=getcomplex();
b=getcomplex();
c=add(a,b);
printcomplex(c);
}

