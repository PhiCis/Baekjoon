#include<bits/stdc++.h>
using namespace std;

long long a, b;

int main()
{
    while(cin>>a>>b)
    {
        if(a==0&&b==0) return 0;
        for(long long i=2;i<=1000000;)
        {
            if(a*i-b>=0 && b*i/__gcd(b*i, a*i-b)<1000000)
            {
                cout<<i<<" ";
                long long g=__gcd(b*i, a*i-b);
                a=(a*i-b)/g;
                b=b*i/g;
            }
            else
            {
                i++;
            }
            if(a==0) break;
        }
        cout<<"\n";
    }
}