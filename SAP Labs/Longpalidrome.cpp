#include<iostream>
using namespace std;

void print(string str,int low,int high)
{
    for(int i=low;i<=high;i++)
       cout<<str[i];
}
int longPal(string str)
{
    int n = str.size();
    int maxlength=1,start=0;
    
    for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
         int flag=1;
         
         for(int k=0;k<(j-i+1)/2;k++) 
          if(str[i+k]!=str[j-k])
             flag=0;
        
         if(flag && (j-i+1) > maxlength) {
           start=i;
           maxlength=j-i+1;
         }
      }
    } 
    cout << "Longest palindrome substring is: ";
    print(str, start, start + maxlength - 1);
    return maxlength;         
}
int main()
{
    string str = "forgeeksskeegfor";
    cout << "\nLength is: "
         << longPal(str);
    return 0;
}
