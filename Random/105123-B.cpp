#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, sum = 0;
    cin >> n;  
    vector<int> arr(n);  
    long long num;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;  
    }
    if(arr.size()<2)
    cout << arr[0];
    else
    {
    for (int i = 1; i < n; i++)
    {
        sum += (arr[i] * arr[i - 1]);
    }
    
    cout << sum << endl;  
    }
    
    return 0;
}
