#include<stdio.h>

int miss(int arr[],int n)
{
   int sum = ((n+1)*(n+2))/2;
   for(int i=0;i<n;i++)
   {
      sum = sum - arr[i];
   }
  return sum;
}
