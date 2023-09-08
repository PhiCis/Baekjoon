#include<bits/stdc++.h>
using namespace std;

vector<int> p; 
int sp[50050];
int mu[50050], smu[50050];

void linear_sieve(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(!sp[i]) p.push_back(i);
		for(auto j:p)
		{
			if(i*j>n) break;
			sp[i*j]=j;
			if(i%j==0) break;
		}
	}
}

int main()
{
	linear_sieve(50000);
	mu[1]=1;
	for(int i=2;i<=50000;i++)
	{
		if(!sp[i]) mu[i]=-1;
		else if(i/sp[i]%sp[i]==0) mu[i]=0;
		else mu[i]=-mu[i/sp[i]];
	}
	for(int i=1;i<=50000;i++)
	{
		smu[i]=smu[i-1]+mu[i];	
	}
	cin.tie(0);
	int n;
	cin>>n;
	while(n--)
	{
		int a, b, d;
		cin>>a>>b>>d;
		a/=d, b/=d;
		int ans=0;
		for(int i=1;i<=250;i++)
		{
			ans+=mu[i]*(a/i)*(b/i);
		}
		int pnt=250, pnta, pntb, ppnt;
		while(pnt<=min(a, b))
		{
			pnta=a/(pnt+1), pntb=b/(pnt+1);
			if(pnta==0||pntb==0) break;
			ppnt=min(a/pnta, b/pntb);
			ans+=(smu[ppnt]-smu[pnt])*pnta*pntb;
			pnt=ppnt;
		}
		cout<<ans<<"\n";
	}	
}