#include<bits/stdc++.h>
using namespace std;
map<string, int> m;
int n, k;
string s1[500050], s2[500050];
string ans[500050];
int pnt;
bool cmp(string a1, string a2)
{
	return a1.compare(a2)<0;
}
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		cin>>s1[i];
		m[s1[i]]++;
	}
	for(int i=1;i<=k;i++)
	{
		cin>>s2[i];
		m[s2[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(m[s1[i]]==2)
		{
			ans[++pnt]=s1[i];
		}
	}
	sort(ans+1, ans+1+pnt, cmp);
	printf("%d\n", pnt);
	for(int i=1;i<=pnt;i++)
	{
		cout<<ans[i]<<"\n";
	}
}