#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		int n, ans=1;
		map<string, int> m;
		string s1, s2[50];
		m.clear();
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			cin>>s1>>s2[i];
			m[s2[i]]++;
		}
		for(int i=1;i<=n;i++)
		{
			if(m[s2[i]])
			{
				ans*=(m[s2[i]]+1);
				m[s2[i]]=0;
			}
		}
		printf("%d\n", ans-1);
	}
}