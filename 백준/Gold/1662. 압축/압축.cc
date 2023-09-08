#include<bits/stdc++.h>
using namespace std;

char a[100];
int ans;
int tmp=1;
stack<int> s;
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=')'&&a[i+1]!='(')
		{
			ans+=tmp;
		}
		else if(a[i]!=')'&&a[i+1]=='(')
		{
			if(a[i]=='0')
			{
				int cnt=1;
				i++;
				while(cnt)
				{
					if(a[i+1]=='(') cnt++;
					if(a[i+1]==')') cnt--;
					i++;
				}
			}
			else
			{
				tmp*=a[i]-'0';
				s.push(a[i]-'0');
				i++;
			}
		}
		else if(a[i]==')')
		{
			tmp/=s.top();
			s.pop();
		}
	}
	printf("%d", ans);
}