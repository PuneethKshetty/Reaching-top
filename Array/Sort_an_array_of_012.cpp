// Sort an array containing only 0,1,2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
  int low = 0;
  int mid = 0;
  int hign = n-1;
  
  while(mid <= high)
  {
    switch(a[mid])
    {
      case 0: swap(a[low++] , a[mid++]); // if 1 element
              break;
      case 1: mid++;    //if 2 element
              break;
      case 2: swap(a[mid] , a[high--]);  //if 3 or more element
              break;
    }
  }
}

void Printarray(int arr[] , int n)
{
  for(int i=0;i < n;i++)
  {
    cout<<arr[i]<<endl;
  }
}
int main()
{
   int arr[] = {1,0,2,2,0,1}
   int n = sizeof(arr) / sizeof(arr[0]);
   sort012(arr, n);
   Printarray(arr,n);
   return 0;
}
