#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string s;
    cin >> s;
    int  count =0;
    size_t firstpos = s.find('1');
    size_t lastpos = s.rfind('1');
    if (firstpos != string::npos && lastpos != string::npos)
    {
       for(long long i=firstpos;i<=lastpos;i++)
    {
        if(s[i] == '0')
        count++;
    }
    }
    
    cout << count <<endl;
  }
}