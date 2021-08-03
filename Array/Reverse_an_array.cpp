// Program to Reverse an array 

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[],int start, int end)  //Function to reverse an array
{
  if(start >= end)  //if start is more than end would return the same
    return;
  //swap the numbers
   int temp = arr[start];
   arr[start] = arr[end];
   arr[end] = temp;
  
  //calling the function 
   ReverseArray(arr, start+1 ,end-1);
}

void PrintArray(int arr[], int n)
{
   for(int i=0; i < n; i++)
   {
     cout << arr[i] << endl;
   }
}

int main()
{
  int arr[] = {10,30,50,70,90,110};
  int n = (sizeof(arr) / sizeof(arr[0]);
  PrintArray(arr,n); //original array
  ReverseArray(arr, 0, n-1); // reverse of the array
  PrintArray(arr,n); // printing the reversed array
}
