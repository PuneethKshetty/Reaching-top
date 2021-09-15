#include<stdio.h>

int maxDiff(int arr[],int n)
{
  int maxdiff= arr[1] - arr[0];
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[j] - arr[i] > maxdiff)
        maxdiff = arr[j] - arr[i];
    }
  }
  return maxdiff;
}

int main()
{
  int n,arr[];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Max diff is %d",maxDiff(arr,n);
  getchar();
  return 0;
}        
