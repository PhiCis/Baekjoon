#include<bits/stdc++.h>
using namespace std;

int n;
char c[11];
bool chk[11];
vector<vector<int> > ans;

void f(vector<int> v)
{
	int k=v.size();
	if(k==n+1)
	{
		ans.push_back(v);
		return;
	}
	if(c[k]=='>')
	{
		for(int i=0;i<v[k-1];i++)
		{
			if(!chk[i])
			{
				chk[i]=true;
				v.push_back(i);
				f(v);
				v.pop_back();
				chk[i]=false;
			}
		}
	}
	else
	{
		for(int i=v[k-1]+1;i<=9;i++)
		{
			if(!chk[i])
			{
				chk[i]=true;
				v.push_back(i);
				f(v);
				v.pop_back();
				chk[i]=false;
			}
		}
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf(" %c", &c[i]);
	}
	for(int i=0;i<=9;i++)
	{
		vector<int> v={i};
		chk[i]=true;
		f(v);
		chk[i]=false;
	}
	for(auto i:ans[ans.size()-1])
	{
		printf("%d", i);
	}
	printf("\n");
	for(auto i:ans[0])
	{
		printf("%d", i);
	}
}