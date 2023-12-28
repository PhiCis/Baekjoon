#include<bits/stdc++.h>
using namespace std;

int n, k, ans=2e9;

bool f(int k)
{
	vector<int> v;
	while(k)
	{
		v.push_back(k%10);
		k/=10;
	}
	for(int i=1;i<v.size();i++)
	{
		if(v[i]!=v[i-1]) goto skip;
	}
	return true;
	skip:;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]>=v[i-1]) goto skip2;
	}
	return true;
	skip2:;
	return false;
}
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		if(f(k))
		{
			ans=min(ans, k);
		}
	}
	if(ans==2e9) cout<<"NERASTA";
	else cout<<ans;
}