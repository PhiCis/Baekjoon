#include<bits/stdc++.h>
using namespace std;

int n, c, a, b;
int dp[110][1200];

int main()
{
    cin>>c>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=c+100;j++)
        {
            dp[i][j]=2e9;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        for(int j=1;j<=c+100;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=b) dp[i][j]=min(dp[i-1][j], dp[i][j-b]+a);
        }
    }
    int ans=2e9;
    for(int i=c;i<=c+100;i++)
    {
        ans=min(ans, dp[n][i]);
    }
    cout<<ans;
}
