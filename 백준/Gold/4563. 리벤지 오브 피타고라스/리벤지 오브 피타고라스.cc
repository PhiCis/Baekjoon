#include<bits/stdc++.h>
using namespace std;

long long n;

int main()
{
    while(cin>>n)
    {
        if(!n) return 0;
        long long m=n*n;
        int ans=0;
        for(long long i=1;i*i<m;i++)
        {
            if(m%i==0 && (m/i-i)%2==0 && (m/i-i)/2>n)
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
