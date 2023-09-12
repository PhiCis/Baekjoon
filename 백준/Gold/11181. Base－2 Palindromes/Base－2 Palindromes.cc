#include<bits/stdc++.h>
using namespace std;
#define int long long
int m;
int ans;
main()
{
	cin>>m;
	m--;
	for(int i=1;;i++)
	{
		if(m<(1<<(i-1>>1)))
		{
			ans+=(1<<(i-1));
			if(i>1) ans+=1;
			for(int j=0;j<(i-1>>1);j++)
			{
				ans+=(((m>>j)&1)<<(i/2+j));
				if(i/2+j!=(i-1)/2-j) ans+=(((m>>j)&1)<<((i-1)/2-j));
			}
			break;
		}
		else m-=(1<<(i-1>>1));
	}
	cout<<ans;
}