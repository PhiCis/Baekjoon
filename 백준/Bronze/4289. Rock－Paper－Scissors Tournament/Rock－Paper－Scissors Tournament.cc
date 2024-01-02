#include<bits/stdc++.h>
using namespace std;

int n, k;
int cnt;

int main()
{
	while(1)
	{
		cin>>n;
		if(n==0)
		{
			return 0;
		}
		if(cnt) cout<<"\n";
		cnt++;
		cin>>k;
		vector<int> A(n+1, 0), B(n+1, 0);
		for(int i=1;i<=k*n*(n-1)/2;i++)
		{
			int a, c;
			string b, d;
			cin>>a>>b>>c>>d;
			if(b!=d) B[a]++, B[c]++;
			if(b=="rock" && d=="scissors") A[a]++;
			if(b=="scissors" && d=="paper") A[a]++;
			if(b=="paper" && d=="rock") A[a]++;
			if(d=="rock" && b=="scissors") A[c]++;
			if(d=="scissors" && b=="paper") A[c]++;
			if(d=="paper" && b=="rock") A[c]++;
		}
		for(int i=1;i<=n;i++)
		{
			if(B[i]==0) cout<<"-\n";
			else printf("%d.%03d\n", (A[i]*2000+B[i])/(2*B[i])/1000, (A[i]*2000+B[i])/(2*B[i])%1000);
		}
	}
}