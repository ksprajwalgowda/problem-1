#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],n,i,found=0;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array A:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the array B:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			found++;
		}
	}
	if(found==n)
	{
		printf("array is equal");
	}
	else
	{
		printf("not equal");
	}
	getch();
}







