#include<bits/stdc++.h>
using namespace std;

long long a, b, tmp, cnt;

int main()
{
	cin>>a>>b;
	while(1)
	{
		cnt++;
		tmp+=b;
		b/=2;
		b=max(1ll, b);
		if(a<=tmp)
		{
			cout<<cnt;
			return 0;
		}
	}
}