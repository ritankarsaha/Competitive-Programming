#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>

#define ll                  long long 

using namespace std;

int main()
{
    ll t;
   cin >> t;
   while(t--){
     string x;
     cin >> x;
     ll m = x[0] -'0' - 1;
     ll n = x.size();
     cout << (m*10) + ((n*(n+1))/2) <<endl;
   }
}

