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
  string s;
  cin >> s;
  char front = s.front();
  char front_upper = toupper(front);
  s.erase(s.begin());
  s.insert(s.begin(),front_upper);
  cout << s <<endl;

}