#include<bits/stdc++.h>
using namespace std;

int t, n, a;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		int tmp=0;
		for(int i=1;i<=n;i++)
		{
			tmp++;
			cin>>a;
			if(a==tmp) tmp++;
		}
		cout<<tmp<<"\n";
	}
}