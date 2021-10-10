#include<bits/stdc++.h> 
using namespace std; 
  
 
void printUnique(int l, int r) 
{ 
    int count=0;
    for (int i=l ; i<=r ; i++) 
    { 
        int num = i; 
        bool visited[10] = {false}; 
  
        while (num) 
        { 

            if (visited[num % 10]) 
                break; 
  
            visited[num%10] = true; 
  
            num = num/10; 
        } 

        if (num == 0) 
            count++; 
    }
    if(count>0)
     cout<<count;
    else
        cout<<"No Unique Number";
} 
  
int main() 
{ 
    int l,r; 
    cin>>l>>r;
    printUnique(l, r); 
    return 0; 
} 
