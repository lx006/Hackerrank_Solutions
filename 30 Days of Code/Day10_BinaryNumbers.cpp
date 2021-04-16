#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,rem,num=0,r,x=0,count=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n!=0)
    {
        rem=n%2;
        if(rem>=1)
        {
            count++;
            if(count>=x)
            {
                x=count;
            }
        }
        else
        {
            count=0;
        }
        n=n/2;
    }
    
    cout<<x;

    return 0;
}
