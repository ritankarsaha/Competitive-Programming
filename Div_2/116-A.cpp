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
  long long n,maxi =0 ;
  cin >> n;
  vector<int> arr;
  for(int i=0;i<n;i++){
    long long a1,b1;
    cin >> a1 >> b1;
    maxi = max((abs(maxi-a1)+b1),b1);
    arr.push_back(maxi);
  }
  sort(arr.begin(),arr.end());
  cout << arr[arr.size()-1] <<endl;
}