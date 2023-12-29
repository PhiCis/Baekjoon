#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, d, ans[10000];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c>>d;
		for(int i=a*60+b;i<c*60+d;i++) ans[i]++;
	}
	for(int i=0;i<10000;i++)
	{
		if(ans[i]==n)
		{
			cout<<"TAIP\n"<<i/60<<" "<<i%60<<" ";
			while(ans[i]==n) i++;
			cout<<i/60<<" "<<i%60;
			return 0;
		}
	}
	cout<<"NE\n";
}