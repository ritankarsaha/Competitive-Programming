#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() { 
   string s;
   cin >> s;
   vector<char> ch1(s.begin(), s.begin() + 2);

   vector<string> stri(5);
   vector<char> ch2;

   for(int i = 0; i < 5; i++) {
      cin >> stri[i];
      ch2.push_back(stri[i][0]);
      ch2.push_back(stri[i][1]);
   }

   bool found = false;
   for(auto ch : ch1) {
      if (find(ch2.begin(), ch2.end(), ch) != ch2.end()) {
         found = true;
         break;
      }
   }

   if(found)
      cout << "YES" << endl;
   else
      cout << "NO" << endl;

   return 0;
}
