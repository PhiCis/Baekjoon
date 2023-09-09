#include<bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
	cin>>n;
	while(n--)
	{
		int a[1010]={0,};
		cin>>m;
		while(m--)
		{
			char d;
			int b, c;
			cin>>d>>b>>c;
			for(int i=b;i<c;i++) a[i]++;
		}
		for(int i=0;i<=1000;i++) if(a[i]) cout<<(char)(a[i]-1+'A');
		cout<<"\n";
	}
}