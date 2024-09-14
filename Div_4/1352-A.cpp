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
   long long t;
   cin >> t;
   
   while(t--){
    vector<long long> final;
    long long power=1;
    long long n;
    cin >> n;
    while(n!=0){
        int a = n%10;
        if(a>0)
        final.push_back(a*power);
        n = n/10;
        power*=10;
    }
    cout << final.size() <<endl;
    for(int ele:final){
        cout << ele <<" ";
    }
    cout <<endl;
   }
}