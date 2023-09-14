#include<bits/stdc++.h>
using namespace std;

int n, k, a[2][2];
string s[110], t[110];

int main()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        cin>>s[i];
    for(int i=1;i<=k;i++)
        cin>>t[i];
    scanf("%1d%1d%1d%1d", &a[0][0], &a[0][1], &a[1][0], &a[1][1]);
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[s[i][j]-'0'][t[i][j]-'0'];
        }
        cout<<"\n";
    }
}