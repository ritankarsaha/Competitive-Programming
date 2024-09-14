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
   int arr[n+1];
   for(int i=1;i<=n;i++)
   {
    int k;
    cin >> k;
    arr[k] = i;

   }
   for(int i=1;i<=n;i++)
   {
    cout << arr[i] << " ";
   }
}