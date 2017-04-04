#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void quad(float a, float b, float c)
{
float disc,r1, r2, realpart, imagpart;
disc=b*b - (4.0*a*c);
if (disc<0)
{
printf("Imaginary Roots\n");
realpart=-b/(2.0 * a);
imagpart=sqrt(abs(disc))/(2.0 * a);
printf("Root 1 = %.2f  +i %.2f\n", realpart, imagpart);
printf("Root 2 = %.2f  -i %.2f\n", realpart, imagpart);
} 
else if (disc==0)
{
printf("Roots are real and equal\n");
r1=-b/(2.0 * a);
r2=r1;
printf("Root 1 = %.2f\n", r1);
printf("Root 2 = %.2f\n", r2);
}
else if (disc>0)
{
printf("Roots are real and distinct \n");
r1=(-b + sqrt(disc))/(2.0 * a);
r2=(-b - sqrt(disc))/(2.0 * a);
printf("Root 1 = %.2f  \n", r1);
printf("Root 2 = %.2f  \n", r2);
}
}
int main()
{
float a, b, c;
printf("Enter the values of a, b and c \n");
scanf("%f %f %f", &a, &b, &c);
quad(a,b,c);
return 0;
}
