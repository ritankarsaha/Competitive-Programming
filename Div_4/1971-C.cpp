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


string solve(int a,int b,int c,int d){
    string s;
    for (int i = 1; i <= 12; i++) {
		if (i == a || i == b) {s += "a";}
		if (i == c || i == d) {s += "b";}
	}

    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
  cin >> a >> b >> c >>d;
  int t;
  cin >> t;
  
     string check = solve(a,b,c,d);
  cout << (check == "abab" || check == "baba" ? "YES\n" : "NO\n");
    }
  
  
  
}