#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int A[1000],n,i,j,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        count++;
    }
    j=count-1;
    for(i=j;i>=0;i--)
    {
        A[j]=A[i];
        cout<<A[j]<<" ";
    }



     
    return 0;
}
