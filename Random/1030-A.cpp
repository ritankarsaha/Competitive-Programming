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

bool check(int n){
    while(n--){
        int num;
        cin >> num;
        if(num == 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
   int n;
   cin >> n; 
   bool a = check(n);
   if(a == false)
   cout << "HARD" <<endl;
   else
   cout << "EASY" <<endl;
}