// LARGEST SUM OF THE CONTIGUOUS ARRAY ( KADANE'S ALGORITHM)
FOR POSITIVE SEGMENTS :)
int maxSubarraySum(int arr[], int n){
    
    int max_so_far=0,max_ending_here = 0;
    for(int i=0;i<n;i++)
    {
         max_ending_here = max_ending_here + arr[i];
         if(max_ending_here < 0)
           max_ending_here = 0;
         else if(max_so_far < max_ending_here)
        max_so_far = max_ending_here;
    }
    return max_so_far;
    
}

int main()
{ 
   int t,n;
   cin>>t;
   while(t--)
   {
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     cout<<"LARGEST SUM OF CONTIGUOUS ARRAY IS"<<maxSubarraySum(arr,n)<<" ";
    }
    return 0;
 }
 
 
 
 FOR NEGATIVE SEGMENTS :)
int maxSubarraySum(int arr[], int n){
   int curr_max=a[0],max_so_far= a[0];
    for(int i=1;i<n;i++)
    {
        curr_max = max(a[i],curr_max+a[i]);
        max_so_far = max(max_so_far,curr_max);
    }
    return max_so_far;  
}


int main()
{ 
   int t,n;
   cin>>t;
   while(t--)
   {
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     cout<<"LARGEST SUM OF CONTIGUOUS ARRAY IS"<<maxSubarraySum(arr,n)<<" ";
    }
    return 0;
 }
 

     
