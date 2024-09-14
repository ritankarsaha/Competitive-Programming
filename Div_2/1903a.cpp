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
    int n,k;
    cin >> n >> k;
    vector<int>arr;
    int num;
    for(int i=0;i<n;i++){
        cin >> num;
        arr.push_back(num);
    }

    bool flag = is_sorted(arr.begin(),arr.end());
    if(flag == true)
    cout << "YES" <<endl;
    else{
        if(k>=2)
        cout << "YES" <<endl;
        else
        cout << "NO" <<endl;
    }
   }
} 