#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1) return 0;
		cout<<n<<" ";
		for(int i=2;i*i<=n;i++)
		{
			while(n%i==0)
			{
				if(i%10!=3)
				{
					cout<<"NO\n";
					goto skip;
				}
				n/=i;
			}
		}
		if(n>1)
		{
			if(n%10!=3)
			{
				cout<<"NO\n";
				goto skip;
			}
		}
		cout<<"YES\n";
		skip:;
	}
}