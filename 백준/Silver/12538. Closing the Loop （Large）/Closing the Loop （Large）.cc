#include<bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		cin>>n;
		vector<int> A, B;
		for(int i=1;i<=n;i++)
		{
			int a;
			char b;
			cin>>a>>b;
			if(b=='B') A.push_back(-a);
			else B.push_back(-a);
		}
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		n=min((int)A.size(), (int)B.size());
		int ans=0;
		for(int i=0;i<n;i++)
		{
			ans+=(-A[i]-1-B[i]-1);
		}
		cout<<"Case #"<<z<<": "<<ans<<"\n";
	}
}