#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  
  while(t--)
  {
    string s;
    getline(cin, s);
    int n = s.length();
    int n9 = 0;
    string res="", num = "";
    for(int i = 0; i < n; i++)
    {
      n9 = 0;
      num = "";
      while(s[i] >= '0' && s[i] <= '9')
      {
        if(s[i] == '9')
          n9 = 1;
        
        num = num + s[i];
        i++;
      }
      
      if(!n9 && num != "")
      {
        long long a = stoll(num);
        long long b = -1;
        
        if(res != "")
          b = stoll(res);
        
        if(a> b)
          res = num;
      }
    }
    if(res == "")
      cout << "-1";
    else
      cout <<res << endl;
  }
  return 0;
}
