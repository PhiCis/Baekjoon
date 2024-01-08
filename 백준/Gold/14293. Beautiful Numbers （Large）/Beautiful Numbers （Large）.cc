#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		long long n;
		cin>>n;
		cout<<"Case #"<<z<<": ";
		long long ans=n-1;
		long long tmp=(long long)sqrt(n);
		if(tmp>=2&&tmp*tmp+tmp+1==n) ans=tmp;
		tmp-=1;
		if(tmp>=2&&tmp*tmp+tmp+1==n) ans=tmp;
		tmp+=2;
		if(tmp>=2&&tmp*tmp+tmp+1==n) ans=tmp;
		tmp=(long long)pow(n, 1.0/3);
		if(tmp>=2&&tmp*tmp*tmp+tmp*tmp+tmp+1==n) ans=tmp;
		tmp-=1;
		if(tmp>=2&&tmp*tmp*tmp+tmp*tmp+tmp+1==n) ans=tmp;
		tmp+=2;
		if(tmp>=2&&tmp*tmp*tmp+tmp*tmp+tmp+1==n) ans=tmp;
		for(long long i=2;i<=min(tmp-1, (long long)pow(n, 1.0/4)+1);i++)
		{
			long long tmpn=n;
			int flag=0;
			while(tmpn)
			{
				if(tmpn%i!=1)
				{
					flag=1;
					break;
				}
				tmpn/=i;
			}
			if(!flag)
			{
				cout<<i<<"\n";
				goto skip;
			}
		}
		cout<<ans<<"\n";
		skip:;
	}
}