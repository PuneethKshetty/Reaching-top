// MOVE NEGATIVE NUMBER IN AN ARRAY TO ONE SIDE AND POSITIVE TO THE OTHER ONE
1. Using partition process of quicksort

#include <bits/stdc++.h>
using namespace std;

void MoveNegate(int arr[],int n)
{
   int j=0;
   for(int i=0;i<n;i++)
       if(arr[i] < 0)
        {
           if(i!=j)
            {
              swap(arr[i],arr[j]);
              j++;
            }
        }
}

void display(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
     printf("%d", arr[i]);
    }
 }

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      cout<<"Before Display"<<display(arr,n)<<endl;
      MoveNegate(arr,n);
      cout<<"After Display"<<display(arr,n)<<endl;
   }
   return 0;
}

2. Using Two Pointer Approach
#include <bits/stdc++.h>
using namespace std;

void MoveNegate(int arr[],int left,int right)
{
    while(left<=high)
     {
        if(arr[left]<0 && arr[right]<0)
         {
            left+=1;
          }
        else if(arr[left]>0 && arr[right]<0)
        {
          int temp=arr[left];
          arr[left]=arr[right];
          arr[right]=temp;
          left+=1;
          right-=1;
        }
        else if((arr[left]>0 && arr[right]>0)
         right-=1;
        else
         left+=1;
         right-=1;
    }
}

void display(int arr[],int n)
{
   for(int i=0;i<=right;i++)
   {
     cout<<arr[i]<<" ";
    }
 }
 
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      cout<<"Before Display"<<display(arr,n)<<endl;
      MoveNegate(arr,n);
      cout<<"After Display"<<display(arr,n)<<endl;
   }
   return 0;
}
