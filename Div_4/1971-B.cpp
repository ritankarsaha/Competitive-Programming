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

bool check(string s ){

    if(s.length() == 1){
        return true;
    }
    for(int i=1;i<s.length();i++){
        if(s[i] !=s[i-1])
        return false;
    }
    return true;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    string rs =s;
    
    
    bool check1 = check(s);
    if(check1 == true)
    cout << "NO" <<endl;
    else{
        cout << "YES" <<endl;
        reverse(rs.begin(),rs.end());
        if(rs !=s)
        cout << rs <<endl;
        else
        {
            char ch = rs.back();
            rs.insert(rs.begin()+1 ,ch);
            rs.pop_back();
            cout << rs <<endl;
        }


        
    }
    
    
  }
}