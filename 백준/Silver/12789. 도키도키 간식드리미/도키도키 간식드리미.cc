#include<bits/stdc++.h>
using namespace std;

int n, a[100010];
stack<int> s1, s2;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=n;i>=1;i--)
	{
		s1.push(a[i]);
	}
	int cnt=1;
	while(cnt<=n)
	{
		while(s2.empty()||s2.top()!=cnt)
		{
			if(s1.empty())
			{
				printf("Sad");
				return 0;
			}
			s2.push(s1.top());
			s1.pop();
		}
		cnt++;
		s2.pop();
	}
	printf("Nice");
}