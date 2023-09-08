#include<bits/stdc++.h>
using namespace std;
stack<int> s[10];
int n, p, a, b, ans;
int main()
{
	scanf("%d%d", &n, &p);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &a, &b);
		while(!s[a].empty()&&s[a].top()>b)
		{
			s[a].pop();
			ans++;
		}
		if(s[a].empty()||s[a].top()!=b) 
		{
			s[a].push(b);
			ans++;
		}
	}
	printf("%d", ans);
}