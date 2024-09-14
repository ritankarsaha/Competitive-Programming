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
  long long k,n,w;
  cin >> k >> n >> w;
  long long total = (w*(w+1))/2;
  long long ans = (total*k) - n;
  if(ans <= 0 )
  cout << 0 << endl;
  else
  cout << ans <<endl;
}