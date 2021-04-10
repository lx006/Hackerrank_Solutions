#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a,b;
    cin>>a>>b;
    int l1=a.size();
    int l2=b.size();
    string c=a+b;
    char t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<l1<<" "<<l2<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;

	
    return 0;
}
