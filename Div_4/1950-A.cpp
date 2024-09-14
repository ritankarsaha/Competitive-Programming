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
    int a,b,c;
    cin >> a >> b >>c;
    if(a<b && b<c)
    cout << "STAIR" <<endl;
    else if(a<b && b>c)
    cout << "PEAK" <<endl;
    else
    cout << "NONE" <<endl; 
   }
}