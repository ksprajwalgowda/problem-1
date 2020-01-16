#include <stdio.h> 
int sum=0,total;
int n ,ar[]; 
void combinationUtil(int arr[], int data[], int start, int end, int index, int r); 
					
void printCombination(int arr[], int n, int r) 
{ 
	
	int data[r]; 
	combinationUtil(arr, data, 0, n-1, 0, r); 
} 

void combinationUtil(int arr[], int data[], int start, int end, int index, int r) 
{ 
	
	if (index == r) 
	{ 
		for (int j=0; j<r; j++)
		 {
			
			sum=sum+data[j];
		}
		if(sum==total||sum==total-1)
		{
			for (int j=0; j<r; j++) 
			{
			
			for(int k=0;k<n;k++)
			{
				if(data[j]==ar[k])
					printf("%d\t",k);	
			
			}
			}
		}
		sum=0;
		return; 
	} 


	for (int i=start; i<=end && end-i+1 >= r-index; i++) 
	{ 
		data[index] = arr[i]; 
		combinationUtil(arr, data, i+1, end, index+1, r); 
	} 
} 

int main() 
{ 
	
	int r,i; 
	
	scanf("%d",&total);
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		ar[i]=arr[i];
	}	
	
	for (i=0;i<n;i++)
	printCombination(arr, n, i); 
} 

