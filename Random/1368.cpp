#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      long long a, b, n, ans = INT_MIN, count = 0;
    cin >> a >> b >> n;
    
    while(ans <= n) {
        if(a > b) {
            b += a;
            ans = b;
        } else {
            a += b;
            ans = a;
        }
        count++;
    }
    cout << count << endl;
    }
    

}
