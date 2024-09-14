#include <iostream>
#include <vector>
using namespace std;

int find(int n) {
    int max = 0;
    int best = 2;
    for (int x = 2; x <= n; x++) {
        int k = n / x;
        int sum = x * (k * (k + 1)) / 2;
        if (sum > max) {
            max = sum;
            best = x;
        }
    }
    return best;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int a = find(n);
        cout << a <<endl;
    }
    
    return 0;
}
