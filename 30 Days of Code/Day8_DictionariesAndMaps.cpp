#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() 
{
    int n1;
string nam;
long no;
cin >> n1;
cin.ignore();
map <string, long> pBook;
for (int i = 0; i < n1; i++) 
{
    cin >> nam;
    cin >> no;
    pBook[nam] = no;
}
while(cin >> nam)
 {
    if (pBook.find(nam) != pBook.end()) 
    {
        cout << nam << "=" << pBook.find(nam)->second << endl;
    }
   else
    {
        cout << "Not found" << endl;
    }
}
    
    return 0;
}
