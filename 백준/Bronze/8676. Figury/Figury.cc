#include<bits/stdc++.h>
using namespace std;
int n, a[1000010];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=3;i<=n;i++)
    {
        if(a[i]*a[i]+a[i-1]*a[i-1]+a[i-2]*a[i-2]==5)
        {
            cout<<"TAK";
            return 0;
        }
    }
    cout<<"NIE";
    return 0;
}