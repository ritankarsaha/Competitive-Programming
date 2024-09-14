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
  long long n,k;
  cin >> n >> k;
  int num = n;
  while(k--){
    int digit = num%10;
    if(digit !=0)
    {
      num--;
    }
    else{
       num = num/10;
    }
  }
  cout << num <<endl;

}