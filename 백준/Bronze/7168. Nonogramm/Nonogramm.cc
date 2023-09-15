#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[110][110];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        bool flag=false;
        int cnt=0;
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='#') cnt++;
            else{
                if(cnt)
                {
                    cout<<cnt<<" ";
                    flag=true;
                }
                cnt=0;
            }
        }
        if(cnt) cout<<cnt;
        else if(!flag) cout<<0;
        cout<<"\n";
    }
    for(int j=1;j<=m;j++)
    {
        bool flag=false;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i][j]=='#') cnt++;
            else{
                if(cnt)
                {
                    cout<<cnt<<" ";
                    flag=true;
                }
                cnt=0;
            }
        }
        if(cnt) cout<<cnt;
        else if(!flag) cout<<0;
        cout<<"\n";
    }
}