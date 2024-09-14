#include <iostream>
#include <vector>

using namespace std;

void count_good_prefixes(int t, vector<pair<int, vector<int> > >& test_cases) {
    for (int k = 0; k < t; k++) {
        int n = test_cases[k].first;
        vector<int>& arr = test_cases[k].second;
        
        int count_good_prefix = 0;
        long long prefix_sum = 0;
        
        for (int i = 0; i < n; ++i) {
            prefix_sum += arr[i];
            if (arr[i] == prefix_sum - arr[i]) {
                ++count_good_prefix;
            }
        }
        
        cout << count_good_prefix << endl;
    }
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, vector<int> > > test_cases(t);
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        test_cases[i] = make_pair(n, arr);
    }
    
    count_good_prefixes(t, test_cases);
    
    return 0;
}
