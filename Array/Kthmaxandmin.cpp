// Find the Kth largest and smallest in an array
Using sorting algorithm

#include<iostream>
using namespace std;
int kthSmallest(int arr[],int n,int k)
{
       sort(arr,arr+n);
       return a[k-1];
 }
 int kthLargest(int arr[],int n,int k)
 {
      sort(arr,arr+n);
      return a[n-k+1];
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
         cin>>a[i];
       }
       int k;
       cin>>k;
       cout<<"Kth Smallest in an array"<< kthSmallest(arr,n,k)<<endl;
       cout<<"Kth Largest in an array"<< kthLargest(arr,n,k)<<endl;
     }
       return 0;
 }
