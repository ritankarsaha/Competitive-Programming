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
   long long n;
   cin >> n;
   long long a = n,count=0;
   while(a!=0){
    long long digit = a%10;
    if(digit == 4 || digit == 7)
    count++;
    a=a/10;

   }
   if(count == 4 || count ==7)
   cout << "YES" <<endl;
   else
   cout << "NO" <<endl;
}