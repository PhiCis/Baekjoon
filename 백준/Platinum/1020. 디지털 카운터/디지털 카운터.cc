#include<bits/stdc++.h>
using namespace std;

int cnt[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 5};
long long dp[20][150];
long long e[19];
string s;
long long n;
long long tmp, ttmp;
int main()
{
    e[0]=1;
    for(int i=1;i<19;i++) e[i]=e[i-1]*10;
    cin>>s;
    for(int i=0;i<s.size();i++) n+=(s[i]-'0')*e[s.size()-1-i];
    for(int i=s.size()-1;i>=0;i--)
    {
        tmp=0; ttmp=0;
        for(int j=i;j<s.size();j++)
        {
            tmp+=cnt[s[j]-'0'];
            ttmp*=10;
            ttmp+=s[j]-'0';
        }
        for(int i=0;i<20;i++) for(int j=0;j<150;j++) dp[i][j]=9e17;
        for(int j=(s[i]-'0')+1;j<10;j++)
        {
            dp[i][cnt[j]]=min(dp[i][cnt[j]], (long long)j);
        }
        for(int j=i+1;j<s.size();j++)
        {
            for(int k=0;k<10;k++)
            {
                for(int l=cnt[k];l<150;l++)
                {
                    dp[j][l]=min(dp[j][l], dp[j-1][l-cnt[k]]*10+k);
                }
            }
        }
        if(dp[s.size()-1][tmp]<9e17)
        {
            cout<<dp[s.size()-1][tmp]-ttmp;
            return 0;
        }
    }
    tmp=0; ttmp=0;
    for(int j=0;j<s.size();j++)
    {
        tmp+=cnt[s[j]-'0'];
        ttmp*=10;
        ttmp+=s[j]-'0';
    }
    for(int i=0;i<20;i++) for(int j=0;j<150;j++) dp[i][j]=9e17;
    for(int j=0;j<10;j++)
    {
        dp[0][cnt[j]]=min(dp[0][cnt[j]], (long long)j);
    }
    for(int j=0+1;j<s.size();j++)
    {
        for(int k=0;k<10;k++)
        {
            for(int l=cnt[k];l<150;l++)
            {
                dp[j][l]=min(dp[j][l], dp[j-1][l-cnt[k]]*10+k);
            }
        }
    }
    if(dp[s.size()-1][tmp]<9e17)
    {
        cout<<dp[s.size()-1][tmp]+e[s.size()]-ttmp;
        return 0;
    }
}
