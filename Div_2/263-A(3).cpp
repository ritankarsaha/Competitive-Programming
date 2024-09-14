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
    int num,row,column;
  for(int i=1;i<6;i++)
  {
    for(int j=1;j<6;j++)
    {
        cin >> num;
        if(num == 1)
        {
           column =j;
           row =i;
        }
    }
  }

  cout << (abs(3-row) + (abs(3-column))) << endl;
  


}