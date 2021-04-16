#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,A[1000],B[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        B[j]=A[i];
        j++;
    }
    for(int j=0;j<n;j++)
    {
        cout<<B[j]<<" ";
    }
    return 0;
}

