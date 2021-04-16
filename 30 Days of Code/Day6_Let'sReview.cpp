#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
 {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        string n1,n2;
        cin>>s;
    
    for(int j=0;j<s.size();j++)
    {
        if(j%2==0)
        {
            n1=n1+s[j];
        }
        else
        {
            n2=n2+s[j];
        }
    }
    cout<<n1<<" "<<n2<<endl;
    }
    return 0;
}
