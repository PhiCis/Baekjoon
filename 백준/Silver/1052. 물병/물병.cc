#include<bits/stdc++.h>
using namespace std;

int n, k, cnt, tmp, ans;

int main()
{
    cin>>n>>k;
    while(1)
    {
        tmp=n;
        ans=0;
        while(tmp)
        {
            ans+=tmp%2;
            tmp/=2;
        }
        if(ans<=k)
        {
            cout<<cnt;
            return 0;
        }
        n++;
        cnt++;
    }
}
