#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   cin >> n;
   
   if (n == 0) {
       cout << 0 << endl;
       return 0;
   }

   long long num, count = 1, maxcount = 1;
   vector<long long> arr;

   for (long long i = 0; i < n; i++) {
       cin >> num;
       arr.push_back(num);
   }

   for (long long i = 1; i < n; i++) {
       if (arr[i] > arr[i - 1]) {
           count++;
           maxcount = max(count, maxcount);
       } else {
           count = 1;
       }
   }

   cout << maxcount << endl;
   return 0;
}
