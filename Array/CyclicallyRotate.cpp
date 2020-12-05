// Cyclically Rotate an array By one

#include<bits/stdc++.h>
using namespace std;

int CyclicRotate(int arr[], int n)
{
   int x = arr[n-1],i;
   for(i=n-1;i>0;i--)
    arr[i] = arr[i-1];
    arr[0] = x;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
        {
           cin>>arr[i];
        }
      CyclicRotate(arr, n);
      for(i=0;i<n;i++)
        {
           cout<<arr[i];
        }
     }
   return 0;
 }
