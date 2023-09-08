#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, l, w, h;
double ans;

int main()
{
	cin>>n>>l>>w>>h;
	double s=0, e=1e9;
	for(int i=0;i<100000;i++)
	{
		double m=0.5*(s+e);
		if((__int128_t)(l/m)*(__int128_t)(w/m)*(__int128_t)(h/m)>=n){
			s=m;
			ans=m;
		}
		else
		{
			e=m;
		}
	}
	cout.precision(10);
	cout<<ans;
}