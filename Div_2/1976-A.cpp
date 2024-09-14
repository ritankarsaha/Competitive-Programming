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

bool check(int n, string &s)
{ 
    
    vector<char> digits;
    vector<char> letters;
       bool letter = false;
       for(char ch : s){
        if(isalpha(ch))
        {
            letter = true;
        }
        else if(isdigit(ch) && letter == true)
        return false;
       }
        
        for(char ch:s){
            if(isdigit(ch)){
                digits.push_back(ch);
            }
            else{
                if(!islower(ch))
                return false;
                else
                letters.push_back(ch);
            }
        }
        if(!is_sorted(digits.begin(),digits.end())){
            return false;
        }
        if(!is_sorted(letters.begin(),letters.end()))
        {
            return false;
        }
        
    
  return true;
}
int main ()
{
    int t;
    cin >> t;
    while(t -- )
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool check1 = check(n,s);
        if(check1)
        cout << "YES" <<endl;
        else
        cout << "NO" <<endl;
    }
}