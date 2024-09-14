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
  long long n,sum=0;
  cin >> n;
  while(n--)
  {
    string s;
    cin >> s;
    if(s == "Tetrahedron")
    sum+=4;
    else if(s=="Cube")
    sum+=6;
    else if(s == "Icosahedron")
    sum+=20;
    else if(s == "Dodecahedron")
    sum+=12;
    else if(s == "Octahedron")
    sum+=8;
  }
  cout <<sum <<endl;
}