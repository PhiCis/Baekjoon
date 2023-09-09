#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string s;
		vector<int> a(26, 0);
		int ans = 0;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			a[s[i]-'A']=1;
		}
		for(int i=0;i<26;i++)
		{
			if(a[i]==0) ans+=65+i;
		}
		printf("%d\n", ans);
	}
}