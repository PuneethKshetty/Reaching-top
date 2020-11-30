// FIND MIN AND MAX IN AN ARRAY
    STEP 1 : USING SIMPLE LINEAR SEARCH
#include<iostream>
using namespace std;

struct Pair
{
   int min;
   int max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;
    if(n == 1)
    {
       minmax.min = arr[0];
       minmax.max = arr[0];
       return minmax;
    }
    if(arr[0] > arr[1])
       minmax.min = arr[1];
       minmax.max = arr[0];
    else
        minmax.min = arr[0];
        minmax.max = arr[1];
    for(i=2;i<n;i++)
     {
       if(arr[i] > minmax.max)
         minmax.max = arr[i];
       else if(arr[i] < minmax.max)
         minmax.min = arr[i];
     }
      return minmax;
}

int main()
{
   int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = sizeof(arr) / sizeof(arr[0]);
   struct pair minmax = getMinMax(arr,n);
   cout<<"THE MAXIMUM ELEMENT IS " <<minmax.max<<endl;
   cout<<"THE MINIMUM ELEMENT IS "<<minmax.min<<endl;
   return 0;
}
        
   STEP 2 : USING TOURNAMENT METHOD
#include<iostream>
using namespace std;

struct Pair
{
   int min;
   int max;
};

struct Pair getMinMax(int arr[], int low.int high)
{ 
     struct Pair minmax,mml,mmr;
     int mid;
     if(low == high)
     {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
     }
     if(high == low+1)
       {
          if(arr[low] > arr[high])
            minmax.max = arr[low];
            minmax.min = arr[high];
          else
             minmax.max = arr[high];
             minmax.min = arr[low];
       return minmax;
       }
      mid = (low+high)/2;
      mml = getMinMax(arr,low,mid);
      mmr = getMinMax(arr, mid+1,high);
        if(mml.min < mmr.min)
         minmax.min = mml.min;
        else
         minmax.min = mmr.min;
        if(mm1.max > mmr.max)
        minmax.max = mml.max;
        else
        minmax.max = mmr.max;
     return minmax;
  }
 int main()
{
   int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = sizeof(arr) / sizeof(arr[0]);
   struct Pair minmax = getMinMax(arr,0,n-1);
   cout<<"THE MAXIMUM ELEMENT IS " <<minmax.max<<endl;
   cout<<"THE MINIMUM ELEMENT IS "<<minmax.min<<endl;
   return 0;
}   
