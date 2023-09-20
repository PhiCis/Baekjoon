#include<bits/stdc++.h>
using namespace std;

int z[1000010];

int main()
{
    string s;
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    while(1)
    {
        cin>>s;
        if(s==".") return 0;
        int n=s.size();
        for(int i=0;i<n;i++) z[i]=0;
        int l=0, r=0;
        z[0]=n;
        for(int i=1;i<n;i++)
        {
            if(i>r)
            {
                l=r=i;
                while(s[r]==s[r-l]) r++;
                z[i]=r-l;
                r--;
            }
            else
            {
                if(z[i-l]<=r-i) z[i]=z[i-l];
                else
                {
                    l=i;
                    while(s[r]==s[r-l]) r++;
                    z[i]=r-l;
                    r--;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            if(z[i]==n-i && n%i==0)
            {
                cout<<n/i<<"\n";
                goto skip;
            }
        }
        cout<<1<<"\n";
    skip:;
    }
}
