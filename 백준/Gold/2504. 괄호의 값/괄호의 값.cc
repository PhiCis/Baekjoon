#include<bits/stdc++.h>
using namespace std;
char a[100];
stack<char> s;
long long ans=0, tmp=1;
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='(')
		{
			tmp*=2;
			s.push(a[i]);
		}
		if(a[i]=='[')
		{
			tmp*=3;
			s.push(a[i]);
		}
		if(a[i]==')'&&(s.empty()||s.top()!='('))
		{
			printf("0");
			return 0;
		}
		if(a[i]==']'&&(s.empty()||s.top()!='['))
		{
			printf("0");
			return 0;
		}
		if(a[i]==')')
		{
			if(a[i-1]=='(')
			{
				ans+=tmp;
			}
			s.pop();
			tmp/=2;
		}
		if(a[i]==']')
		{
			if(a[i-1]=='[')
			{
				ans+=tmp;
			}
			s.pop();
			tmp/=3;
		}
		
	}
	if(!s.empty()) printf("0");
	else printf("%d", ans);
}