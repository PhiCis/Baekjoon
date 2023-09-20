#include<bits/stdc++.h>
using namespace std;
long long n, m, k;
string s, t;
long long q, l, r;
long long ans[100];
int main()
{
    cin>>s;
    n=s.size();
    cin>>t;
    m=t.size();
    for(int i=0;i<m;i++) if(t[i]=='$') k++;
    cin>>q>>l>>r;
    l--; r--;
    if(k==1)
    {
        for(long long i=l;i<=r;i++)
        {
            if(i<n) cout<<s[i];
            else if(i<n+q*(m-k)) cout<<t[1+(i-n)%(m-k)];
            else cout<<"-";
        }
        return 0;
    }
    ans[0]=n;
    for(int i=1;i<=q;i++)
    {
        ans[i]=ans[i-1]*k+(m-k);
        if(ans[i]>=2e9)
        {
            q=i;
            break;
        }
    }
    for(long long i=l;i<=r;i++)
    {
        if(i>=ans[q]) cout<<"-";
        else
        {
            long long tmp=i;
            for(int j=q;j>0;j--)
            {
                long long ttmp=0;
                for(int l=0;l<m;l++)
                {
                    if(ttmp<=tmp && tmp<ttmp+(t[l]=='$'?ans[j-1]:1))
                    {
                        if(t[l]=='$')
                        {
                            tmp-=ttmp;
                            break;
                        }
                        else
                        {
                            cout<<t[l];
                            goto skip;
                        }
                    }
                    else
                    {
                        ttmp+=(t[l]=='$'?ans[j-1]:1);
                    }
                }
            }
            cout<<s[tmp];
        skip:;
        }
    }
}
