#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, k, m;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>k>>m;
		if(m%9==0)
		{
			if(k%4==1) cout<<"0 1\n";
			if(k%4==2) cout<<"9 1\n";
			if(k%4==3) cout<<"9 -8\n";
			if(k%4==0) cout<<"0 -8\n";
		}
		else if(m%9==3)
		{
			if(k==1) cout<<"0 1\n";
			else
			{
				if(k%4==2) cout<<"3 1\n";
				if(k%4==3) cout<<"3 -8\n";
				if(k%4==0) cout<<"-6 -8\n";
				if(k%4==1) cout<<"-6 1\n";
			}
		}
		else if(m%9==6)
		{
			if(k==1) cout<<"0 1\n";
			else
			{
				if(k%4==2) cout<<"6 1\n";
				if(k%4==3) cout<<"6 -8\n";
				if(k%4==0) cout<<"-3 -8\n";
				if(k%4==1) cout<<"-3 1\n";
			}
		}
		else
		{
			k%=12;
			m%=9;
			ll tmp=1;
			int x=0, y=0;
			for(int i=0;i<k;i++)
			{
				if(i%4==0) y+=tmp;
				if(i%4==1) x+=tmp;
				if(i%4==2) y-=tmp;
				if(i%4==3) x-=tmp;
				tmp=tmp*m%9;
			}
			cout<<x<<" "<<y<<"\n";
		}
	}
}