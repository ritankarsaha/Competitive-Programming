#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string str = to_string(n);
    string result;

    
    for (size_t i = 0; i < str.size(); ++i) {
        int digit = str[i] - '0';
        int inverted = 9 - digit;

        
        if (i == 0 && inverted == 0) {
            result += str[i];
        } else {
            result += (digit > inverted) ? (inverted + '0') : str[i];
        }
    }

    cout << result << endl;

    return 0;
}
