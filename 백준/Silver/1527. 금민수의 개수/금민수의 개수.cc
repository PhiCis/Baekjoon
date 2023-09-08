#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int a, b;
int ans;

int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			string tmp="";
			for(int k=0;k<i;k++)
			{
				if((j>>k)&1) tmp+="7";
				else tmp+="4";
			}
			v.push_back(stoi(tmp));
		}
	}
	cin>>a>>b;
	for(int i:v)
	{
		if(a<=i&&i<=b) ans++;
	}
	cout<<ans;
}