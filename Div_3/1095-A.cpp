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
  int n;
  cin >> n;
  string t;
  cin >> t;
  int j=0;
  for(int i=0;i<n;i=i+j)
  {
    cout << t[i];
    j++;
  }
  cout <<endl;
}