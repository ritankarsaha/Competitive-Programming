#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long

ll min_operations(vector<ll>& a, vector<ll>& b) {
    int n = a.size();
    int m = b.size();
    ll total_operations = 0;

    // Sort both arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Initially, both arrays should be compared from the last element of b
    vector<ll> diffs;
    for (int i = 0; i < n; i++) {
        diffs.push_back(abs(a[i] - b[m - 2]));
    }

    // Calculate the minimum number of operations required
    ll min_diff = *min_element(diffs.begin(), diffs.end());
    total_operations += min_diff;

    // Copy operation
    a.push_back(a[0]);
    total_operations++;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            total_operations += abs(a[i] - b[i]);
        }
    }

    return total_operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> b(n + 1);
        for (int i = 0; i < n + 1; i++) {
            cin >> b[i];
        }

        ll result = min_operations(a, b);
        cout << result << endl;
    }

    return 0;
}
