#include<stdio.h>

int count(int arr[],int n,int x)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        res++;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    printf("%d",count(arr,n,x));
    return 0;
}
