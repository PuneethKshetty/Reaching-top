//input: N = 6
//   arr[] = 7,10,30,5,4,20
//   K = 3

#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[],int n,int k)
{
    sort(arr,arr+n); // sort in ascending order
    return arr[k-1];
}
int main()
{
    int arr[] = {7,10,5,4,16,20};
    int k=6;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum kth element is :"<< kthsmallest(arr,n,k)<<endl;
    return 0;
}
