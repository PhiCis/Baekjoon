#include<bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<n<<": ";
		int tmp=n;
		for(int i=2;i*i<=tmp;i++)
		{
			while(tmp%i==0)
			{
				cout<<i<<" ";
				tmp/=i;
			}
		}
		if(tmp==n)
		{
			cout<<"prime\n";
		}
		else if(tmp>1)
		{
			cout<<tmp<<"\n";
		}
		else cout<<"\n";
	}
}