#include<iostream>
using namespace std;

int m1(int a[],int n)
{
    int i,j;
    if(n == 1)
    {
        cout<<0;
    }
    
    int* left = new int[sizeof(int)*n];
    int* right = new int[sizeof(int)*n];
    int* prod = new int[sizeof(int)*n];
    
    left[0] = 1;
    right[n-1] = 1;
    
    for(i=1;i<n;i++)
    {
        left[i] = a[i-1]*left[i-1];
    }
    for(j=n-2;j>=0;j--)
    {
        right[j] = a[j+1]*right[j+1];
    }
    for(i=0;i<n;i++)
    {
        prod[i] = left[i]*right[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<prod[i]<<"";
    }
    return 0;
}

int main()
{
    int a[] = { 10, 3, 5, 6, 2 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "The product array is: \n";
    m1(a, n);
}
