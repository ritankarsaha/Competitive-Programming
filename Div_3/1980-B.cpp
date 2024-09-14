#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int count11(const vector<int>& vec, int value) {
    int count = 0;
    for (int num : vec) {
        if (num == value) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int fav_value = a[f - 1]; 
        sort(a.begin(), a.end(), greater<int>()); 
        
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (a[i] == fav_value) {
                count++;
            }
        }
        
        if (count == 0) {
            cout << "NO" << endl;
        } else {
            int total_fav = count11(a, fav_value);
            if (total_fav == count) {
                cout << "YES" << endl;
            } else {
                cout << "MAYBE" << endl;
            }
        }
    }
    
    return 0;
}
