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
    int x,y,k;
    cin >> x >> y >> k;
    if(x>y){
        cout << (x+k-1)/k + max(((x+k-1)/k-1), ((y+k-1)/k)) << endl;
    }
    else{
        cout << (y+k-1)/k + max((y+k-1)/k ,(x+k-1)/k) <<endl;
    }
   }
}