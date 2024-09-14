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
   int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ml = k * l;
    int min = INT_MAX;
    if (ceil(ml / nl) < min)
        min = ceil(ml / nl);
    if (c * d < min)
        min = c * d;
    if (ceil(p / np) < min)
        min = ceil(p / np);
    cout << min / n << endl;
}
