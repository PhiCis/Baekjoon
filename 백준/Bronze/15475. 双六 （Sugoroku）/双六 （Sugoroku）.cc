#include<bits/stdc++.h>
using namespace std;

int n, a[110];

int main()
{
    cin>>n;
    int tmp=0, ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            tmp++;
        }
        else
        {
            ans=max(ans, tmp);
            tmp=0;
        }
    }
    ans=max(ans, tmp);
    cout<<ans+1;
}