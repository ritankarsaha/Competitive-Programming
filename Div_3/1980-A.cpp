#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        
        
        int count[7] = {0};
        
        
        for (char c : a) {
            count[c - 'A']++;
        }
        
        int additional_problems = 0;
        for (int i = 0; i < 7; i++) {
            if (count[i] < m) {
                additional_problems += m - count[i];
            }
        }
        
        cout << additional_problems << endl;
    }
    
    return 0;
}
