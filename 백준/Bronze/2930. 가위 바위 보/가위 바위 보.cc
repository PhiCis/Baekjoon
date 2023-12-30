#include<bits/stdc++.h>
using namespace std;

int n, m;
string s[100];
map<char, int> M={{'R', 0}, {'S', 1}, {'P', 2}};
int ans;
int main()
{
	cin>>m;
	cin>>s[0];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		for(int j=0;j<m;j++)
		{
			if((M[s[i][j]]-M[s[0][j]]+3)%3==1) ans+=2;
			else if(M[s[i][j]]==M[s[0][j]]) ans++;
		}
	}
	cout<<ans<<"\n";
	ans=0;
	for(int j=0;j<m;j++)
	{
		int tmp[3]={0, 0, 0};
		for(int i=1;i<=n;i++)
		{
			tmp[M[s[i][j]]]++;
		}
		ans+=max({2*tmp[2]+tmp[1], 2*tmp[0]+tmp[2], 2*tmp[1]+tmp[0]});
	}
	cout<<ans;
}