#include<bits/stdc++.h>
using namespace std;

int n;
char c;
int m[26];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		m[c-'a']=i;
	}
	for(int i=0;i<26;i++)
	{
		for(int j=i+1;j<26;j++)
		{
			if(m[i]&&m[j])
			{
				cout<<"Yes\n"<<m[i]<<" "<<m[j]<<" "<<1<<"\n";
				return 0;
			}
		}
	}
	cout<<"No";
}