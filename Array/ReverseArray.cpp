# REVERSE AN ARRAY : ITERATIVE WAY 

#include<iostream>
using namespace std;

void ReverseArray(int arr[],int start,int end)
{
      while(start < end)
      {
         int temp = arr[start];
         arr[start] = arr[end];
         arr[end] = temp;
         start++;
         end--;
      }
}

void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Array would be :"<<arr[i]<<endl;
    }
}

int main()
{
   int arr[]= {1,2,3,4,5,6};
   int size = sizeof(arr) / sizeof(arr[0]);
   cout<<"Array Before Reversing"<<endl;
   printArray(arr,size);
   ReverseArray(arr,0,size-1);
   cout<<"Array After Reversing"<<endl;
   printArray(arr,size);
   return 0;
}
   
 # REVERSE AN ARRAY : RECURSIVE WAY 
 
 #include<iostream>
 using namespace std;
 
 void ReverseArray(int arr[],int start,int end)
 {
     if(start >= end)
       return;
     int temp = arr[start];
     arr[start] = arr[end];
     arr[end] = temp;
     ReverseArray(arr, start+1,end-1);
 }
 
 void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Array would be :"<<arr[i]<<endl;
    }
}

int main()
{
   int arr[]= {1,2,3,4,5,6};
   int size = sizeof(arr) / sizeof(arr[0]);
   cout<<"Array Before Reversing"<<endl;
   printArray(arr,size);
   ReverseArray(arr,0,size-1);
   cout<<"Array After Reversing"<<endl;
   printArray(arr,size);
   return 0;
 }
