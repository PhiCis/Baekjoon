#include<bits/stdc++.h>
using namespace std;

int n;
string a[1010];
map<string, int> m;
int ans;
string anss;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(ans<m[a[i]])
		{
			ans=m[a[i]];
			anss=a[i];
		}
		else if(ans==m[a[i]]&&a[i].compare(anss)<0)
		{
			anss=a[i];
		}
	}
	cout<<anss;
}
