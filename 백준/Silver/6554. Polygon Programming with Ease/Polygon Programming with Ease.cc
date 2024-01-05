#include<bits/stdc++.h>
using namespace std;

long long n;
long long a[1000010], b[1000010];

int main()
{
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i];
			a[n+i]=a[i];
			b[n+i]=b[i];
		}
		cout<<n<<" ";
		for(int i=1;i<=n;i++)
		{
			long long ans1=0, ans2=0;
			for(int j=0;j<n;j++)
			{
				if(j%2==0) ans1+=a[i+j], ans2+=b[i+j];
				else ans1-=a[i+j], ans2-=b[i+j];
			}
			printf("%lld.000000 %lld.000000 ", ans1, ans2);
		}
		cout<<"\n";
	}
}