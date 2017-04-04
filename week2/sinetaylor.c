#include<stdio.h>
#include<math.h>
float convert_rad(float d)
{
float rad;
rad=(3.14159/180)*d;
return rad;
}
float sine(float x)
{
float term,sum,prev,diff;
int i;
term=x;
sum=x;
diff=x;
for(i=3;diff>0.000001;i+=2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}
int main()
{
float degree,x,sum,s;
printf("Enter the Angle in Degree\n");
scanf("%f",&degree);
x=convert_rad(degree);
sum=sine(x);
printf("The sine of %.2f degrees using Taylors Series is %.3f \n",degree,sum);
s=sin(x);
printf("The sine of %.2f degrees using the function is %.3f",degree,s);
return 0;
}


