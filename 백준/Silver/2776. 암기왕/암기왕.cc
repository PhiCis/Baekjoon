#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll T, n, m;

int main()
{
    scanf("%lld", &T);
    while(T--)
    {
        scanf("%lld", &n);
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            scanf("%lld", &a[i]);
        }
        sort(a.begin(), a.end());
        scanf("%lld", &m);
        for(int i=0;i<m;i++)
        {
            long long v;
            scanf("%lld", &v);
            auto l = lower_bound(a.begin(), a.end(), v);
            if(l!=a.end()&&a[l-a.begin()]==v)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
    }
}