#include<iostream>
#include<vector>
#include<string>
#include<algorithm> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> v1(n);
        for(auto &i : v1){
            cin >> i;
        }
        for(int i = n - 1; i >= 0; i--){ // Add spaces around operators for readability
            cout << find(v1[i].begin(), v1[i].end(), '#') - v1[i].begin() + 1 << " ";
        }
        cout << endl;
    }
}