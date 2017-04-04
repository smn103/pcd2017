#include <stdio.h>
void inputarray(int n, int a[n])
{
	printf("Enter the Array Elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void displayarray(int n, int a[n])
{
	int i;	
	printf("The Array Elements are\n");
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	printf("\n");
}
void bubblesort(int n, int a[n])
{
int i,j,temp;
for (i=1;i<n;i++)
{
    for (j=0;j<n-i;j++)
    {
      if (a[j]>a[j+1]) 
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
}
printf("The Array sorted in Ascending Order is\n");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
}
int main()
{
	int n;
	printf("Enter the Size of the Array\n");
	scanf("%d",&n);
	int a[n];
	inputarray(n,a);
	displayarray(n,a);
	bubblesort(n,a);
	return 0;
}
	

	

