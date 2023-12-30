#include<bits/stdc++.h>
using namespace std;

int t, n, x[1000100], y[1000100];
int f[10]={20, 40, 60, 80, 100, 120, 140, 160, 180, 200};

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			cin>>x[i]>>y[i];
			if(x[i]*x[i]+y[i]*y[i]<=f[0]*f[0]) ans+=10;
			else if(x[i]*x[i]+y[i]*y[i]<=f[1]*f[1]) ans+=9;
			else if(x[i]*x[i]+y[i]*y[i]<=f[2]*f[2]) ans+=8;
			else if(x[i]*x[i]+y[i]*y[i]<=f[3]*f[3]) ans+=7;
			else if(x[i]*x[i]+y[i]*y[i]<=f[4]*f[4]) ans+=6;
			else if(x[i]*x[i]+y[i]*y[i]<=f[5]*f[5]) ans+=5;
			else if(x[i]*x[i]+y[i]*y[i]<=f[6]*f[6]) ans+=4;
			else if(x[i]*x[i]+y[i]*y[i]<=f[7]*f[7]) ans+=3;
			else if(x[i]*x[i]+y[i]*y[i]<=f[8]*f[8]) ans+=2;
			else if(x[i]*x[i]+y[i]*y[i]<=f[9]*f[9]) ans+=1;
		}
		cout<<ans<<"\n";
	}
}