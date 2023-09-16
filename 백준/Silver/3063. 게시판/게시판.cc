#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x[4], y[4];
		vector<int> u, v;
		for(int i=0;i<4;i++)
		{
			cin>>x[i]>>y[i];
			u.push_back(x[i]);
			v.push_back(y[i]);
		}
		sort(u.begin(), u.end());
		sort(v.begin(), v.end());
		int ans=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(x[0]<=u[i]&&u[i+1]<=x[1]&&y[0]<=v[j]&&v[j+1]<=y[1])
				{
					ans+=(u[i+1]-u[i])*(v[j+1]-v[j]);
					if(x[2]<=u[i]&&u[i+1]<=x[3]&&y[2]<=v[j]&&v[j+1]<=y[3]) 
						ans-=(u[i+1]-u[i])*(v[j+1]-v[j]);
				}
			}
		}
		cout<<ans<<"\n";
	}
}