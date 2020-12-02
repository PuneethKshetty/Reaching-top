// Sort an array of 0s , 1s, 1s

Normal Approach
#include<iostream>
using namespace std;

void sort012(int arr[],int n)
 {
    int low=0,mid=0,high=n-1;
    while(mid<=high)
     {
        if(a[mid] == 0)
         {
            swap(a[low],a[mid]);
            low++;
            mid++;
          }
          else if(a[mid] == 1)
           {
             mid++;
           }
         else if(a[mid] == 2)
           {
              swap(a[mid],a[high]);
              high--;
           }
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
   for(i=0;i<n;i++)
     {
        cin>>arr[i];
      }
   cout<<"Sorted Array of 0s 1s and 2s is"<<sort012(arr,n)<<endl;
   }
   return 0;
 }
 
 
// 2. using switch method

void sort(int arr[],int n)
{
   int l=0,m=0,h=n-1;
   while(m<=h)
    {
       switch(a[m])
       {
         case 0: swap(a[l],a[m]);
                  l++;
                  m++;
                 break;
         case 1: m++;
                 break;
         case 2: swap(a[m],a[h]);
                  h--;
                  break;
         }
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
   for(i=0;i<n;i++)
     {
        cin>>arr[i];
      }
   cout<<"Sorted Array of 0s 1s and 2s is"<<sort012(arr,n)<<endl;
   }
   return 0;
 }
 
