#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010][1010], ANS, tmp;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            string s;
            cin>>s;
            int ans=0;
            for(int k=0;k<s.size();k++) if(s[k]=='9') {ans++; ANS++;}
            a[i][j]=ans;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int ttmp=0;
        for(int j=1;j<=m;j++) ttmp+=a[i][j];
        tmp=max(ttmp, tmp);
    }
    for(int j=1;j<=m;j++)
    {
        int ttmp=0;
        for(int i=1;i<=n;i++) ttmp+=a[i][j];
        tmp=max(ttmp, tmp);
    }
    cout<<ANS-tmp;
}
