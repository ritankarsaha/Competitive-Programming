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
   while(t--){
    int x,y;
    cin >> x >> y;
    cout << min(x,y) <<" " << max(x,y) <<endl;
   }
}