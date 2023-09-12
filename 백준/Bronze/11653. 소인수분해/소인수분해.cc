#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long k;
	scanf("%lld", &k);
	vector<pair<long long, long long> > v;
	for(long long i=2;i*i<=k;i++)
	{
		if(k%i==0)
		{
			long long cnt = 0;
			while(k%i==0)
			{
				cnt++;
				k/=i;
			}
			v.push_back({i, cnt});
		}
	}
	if(k!=1) v.push_back({k, 1});
    for(long long i=0;i<v.size();i++)
    {
        for(long long j=0;j<v[i].second;j++)
        {
            printf("%lld\n", v[i].first);
        }
    }
}