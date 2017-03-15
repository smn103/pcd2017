#include<stdio.h>
#include<stdlib.h>
void printmatrix(int m,int n,int o, int p, int a[m][n],int b[o][p])
{
	int i,j;	
	printf("The First Matrix is\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
	}
	printf("The Second Matrix is\n");
	for(i=0;i<o;i++)
	{
	for(j=0;j<p;j++)
	{
	printf("%d ",b[i][j]);
	}
	printf("\n");
	}
}
void prodmatrix(int m,int n,int o, int p, int a[m][n],int b[o][p])
{
	int i,j,k;
	int c[m][p];
	for (i=0;i<m;i++)
	{
	for (j=0;j<p;j++)
	{
	c[i][j]=0;
	for (k=0;k<n;k++)
	{
	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
	}
	}
	}
	printf("Product of the Two Matrices is \n");
	for (i=0;i<m;i++)
	{
	for (j=0;j<p;j++)
	{
	printf("%d ",c[i][j]);
	}
	printf("\n");
	}
}
int main()
{
	int m, n,o,p,i,j;
	printf("Enter the Number of rows and columns for the First Matrix\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter the Elements of the First Matrix\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("Enter Element [%d][%d]\n",i+1,j+1);
	scanf("%d",&a[i][j]);
	}
	}
	printf("Enter the Number of rows and columns for the Second Matrix\n");
	scanf("%d%d",&o,&p);
	int b[o][p];
  	if (n!=o)
	{
	printf("Matrices with Entered Orders can't be multiplied with each other\n");
	exit(0);
	}
	else
	{
	printf("Enter the Elements of the Second Matrix\n");
	for(i=0;i<o;i++)
	{
	for(j=0;j<p;j++)
	{
	printf("Enter Element [%d][%d]\n",i+1,j+1);
	scanf("%d",&b[i][j]);
	}
	}
	}
	printmatrix(m,n,o,p,a,b);
	prodmatrix(m,n,o,p,a,b);
}




     

      

     

      






