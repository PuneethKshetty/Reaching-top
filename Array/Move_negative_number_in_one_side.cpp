//Move all negative numbers from one side in the array

#include<bits/stdc++.h>
using namespace std;

void negation(int arr[],int n)  // swapping negative numbers from one side to other
{
   int j = 0;
   for(int i=0;i<n;i++)
   {
     if(arr[i]<0)
     {
       if(i!=j)
         swap(arr[i],arr[j]);
       j++;
     }
   }
}

void print(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
}

int main()
{
  int arr[]={-1,2,-9,10,-15,30};
  int n = sizeof(arr)/sizeof(arr[0]);
  negation(arr,n);
  print(arr,n);
  return 0;
}

