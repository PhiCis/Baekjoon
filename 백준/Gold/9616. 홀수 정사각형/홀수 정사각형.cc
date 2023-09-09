#include<bits/stdc++.h>
using namespace std;
#define int long long
int m, n;
main()
{
	while(1)
	{
		cin>>m>>n;
		if(m==0) return 0;
		if(m>n) swap(m, n);
		int tmp=m/2+1;
		cout<<(long long)((__int128_t)(m+1)*(n+1)*tmp*tmp-(__int128_t)(m+n+2)*tmp*(4*tmp*tmp-1)/3+(__int128_t)tmp*tmp*(2*tmp*tmp-1))<<"\n";
	}
}