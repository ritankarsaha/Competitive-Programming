#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
#include<set>
using namespace std;

int main()
{
  string s;
  cin >> s;
  set<char> unique;
  for(char c: s)
  {
    unique.insert(c);
  }
  if(unique.size()%2 == 0)
  cout << "CHAT WITH HER!" <<endl;
  else
  cout << "IGNORE HIM!" <<endl;
}