void printArray(int arr[], int n)
{
  int i;
  printf("Array : ");
  for(i=0; i<n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  
}
void bubble(int arr[],int n)
{
  int i,j,temp;
  for(i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
  {
    if(arr[j]<arr[i])
    {
      temp=arr[i];
      arr[i]= arr[j];
      arr[j]=temp;
    }
  }
  }
}
  int main()
  {
    int i,j,temp;
    int arr[]={50,10,90,30,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Array elements are - \n");
    printArray(arr,n);
    bubble(arr,n);
    printf("\nAfter sorting array elements are- \n");
    printArray(arr,n);
    return 0;
  }


