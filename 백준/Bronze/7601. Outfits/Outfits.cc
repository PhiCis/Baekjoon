#include<bits/stdc++.h>
using namespace std;

int n, m, s, e, a, b;
int cnt;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	while(1)
	{
		cnt++;
		cin>>n>>m;
		if(n==0) return 0;
		cout<<"Scenario "<<cnt<<"\n";
		cin>>s>>e;
		for(int i=1;i<=m;i++)
		{
			cout<<"Day "<<i<<" ";
			cin>>a>>b;
			if(s!=0 && a>=s) a++;
			if(e!=0 && b>=e) b++;
			if(a+b-1==n) cout<<"ALERT\n";
			else cout<<"OK\n";
		}
	}
}