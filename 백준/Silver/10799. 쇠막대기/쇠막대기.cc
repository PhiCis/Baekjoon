#include<bits/stdc++.h>
using namespace std;
char a[100010];
stack<char> s;
int ans;
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='(') s.push(a[i]);
		if(a[i]==')')
		{
			s.pop();
			if(a[i-1]=='(') ans+=s.size();
			else ans++;
		}
	}
	printf("%d", ans);
}