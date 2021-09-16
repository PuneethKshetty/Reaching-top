#include<iostream>
using namespace std;

public:
string modify(string s)
{ 
  //code
  s.erase(remove(s.begin(),s.end(),' '),s.end()); //removes the spaces and reduce the size 
  return s;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    getline(cin,s);
    Solution obj;
    cout<<obj.modify(s)<<endl;  
  }
  return 0;
}
