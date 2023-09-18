#include<bits/stdc++.h>
using namespace std;

int n, m, a[51], b[10001];
int c[10001], s;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1, a+n+1);
    cin>>m;
    for(int i=1;i<=m;i++) cin>>b[i];
    sort(b+1, b+m+1);
    int cnt=0;
    if(b[m]>a[n])
    {
        cout<<-1;
        return 0;
    }
    while(1)
    {
        cnt++;
        int tmp=n;
        for(int i=m;i>=1;i--)
        {
            if((!c[i])&&b[i]<=a[tmp])
            {
                c[i]=1;
                s++;
                tmp--;
            }
            if(tmp==0) break;
        }
        if(s==m) break;
    }
    cout<<cnt;
}
