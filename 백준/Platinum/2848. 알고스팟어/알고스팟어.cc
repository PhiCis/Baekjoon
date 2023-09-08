#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int> > v = vector<vector<int> >(26, vector<int>());
vector<int> ans;
queue<int> q;
char a[110][11];
int n, i, j, k, c[26], d[26], chk, cnt;
int mlt;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", a[i]);
		for(j=0;j<strlen(a[i]);j++)
		{
			c[a[i][j]-'a']=1;
		}
	}
	for(i=0;i<26;i++)
	{
		if(c[i]) 
		{
			chk++;	
			//printf("%c ", i+'a');
		}
	}
	//printf("~");
	for(i=1;i<n;i++)
	{
		int len=min(strlen(a[i]), strlen(a[i-1]));
		for(j=0;j<len;j++)
		{
			if(a[i][j]!=a[i-1][j])
			{
				v[a[i-1][j]-'a'].push_back(a[i][j]-'a');
				d[a[i][j]-'a']++;
				break;
			}
		}
		if(j==len&&strlen(a[i-1])>strlen(a[i]))
		{
			printf("!");
			return 0;
		}
	}
	for(i=0;i<26;i++)
	{
		if(c[i]&&d[i]==0) q.push(i);
	}
	for(i=0;i<chk;i++)
	{
		if(q.size()>1)
		{
			mlt=1;
		}
		else if(q.size()==0)
		{
			printf("!");
			return 0;
		}
		
		int tmp=q.front();
		ans.push_back(tmp);
		
		q.pop();
		for(j=0;j<v[tmp].size();j++)
		{
			if(--d[v[tmp][j]]==0) q.push(v[tmp][j]);
		}
		
	}
	if(mlt)
	{
		printf("?");
		return 0;
	}
	for(i=0;i<ans.size();i++)
	{
		printf("%c", ans[i]+'a');
	}
}