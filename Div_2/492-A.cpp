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
  int n;
  cin >> n;
  int sum =0,height=0;
  for(int i=1;n>0;i++)
  {
     sum+=i;
     if(n-sum >= 0)
     height++;
     n-=sum;
  }
  cout << height;
}