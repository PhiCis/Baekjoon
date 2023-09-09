#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(!n) return 0;
		vector<int> v(50, 0);
		for(int i=0;i<n*6;i++)
		{
			int a;
			cin>>a;
			v[a]=1;
		}
		for(int i=1;i<=49;i++)
		{
			if(v[i]) continue;
			cout<<"No\n";
			goto skip;
		}
		cout<<"Yes\n";
		skip:;
	}
}