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
   string  s,sf;
   cin >> s;
   vector<int> arr;
   for(char c:s)
   {
      if(isdigit(c))
      arr.push_back((c- '0'));
   }
   
   sort(arr.begin(),arr.end());
   
   for(size_t i=0;i<arr.size();i++)
   {
      sf.push_back(arr[i]+'0');
      sf.push_back('+');
   }
   sf.pop_back();
   cout <<  sf <<endl;
}