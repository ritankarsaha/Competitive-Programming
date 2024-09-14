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
  long long a,b,count =0;
  cin >> a >> b;
  while(a<=b)
  {
    a*=3;
    b*=2;
    count++;
  }
  cout << count <<endl;
}