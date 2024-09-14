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
  int a,b,c;
  cin >> a >> b >>c;
  vector<int> arr;
  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
  sort(arr.begin(),arr.end());
  cout << (abs(arr[0]-arr[1])) + (abs(arr[1] - arr[2])) <<endl;

}