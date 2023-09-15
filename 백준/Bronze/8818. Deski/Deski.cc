#include<bits/stdc++.h>
using namespace std;
long long n, m;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>m;
        long long tmp=1, cnt=0;
        while(tmp<m) tmp*=2, cnt++;
        for(int i=0;i<=cnt;i++)
        {
            if((m>>i)&1)
            {
                cout<<cnt-i<<"\n";
                goto skip;
            }
        }
    skip:;
    }
}