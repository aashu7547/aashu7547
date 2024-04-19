#include <stdio.h>
void printArrray(int arr[], int n)
{
	int i;
	printf("Array");
	for(i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
void bubble(int arr[], int n)
{
	int i, j, temp;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
}
int main()
{
	int i,j,temp;
	int arr[]={12,-55,10,-40,-100};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Before sorting Array elements are- \n");
	
	bubble(arr,n);
	printf("\nAfter sorting Array elements are- \n");

	return 0;
}
