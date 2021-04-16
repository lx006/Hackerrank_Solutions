#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,v;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1;i<=10;i++)
    {
        v=n*i;
        cout<<n<<" x "<<i<<" = "<<v<<endl;
    }

    return 0;
}
