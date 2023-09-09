#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="P=NP")
		{
			printf("skipped\n");
		}
		else
		{
			int cnt = 0;
			int a = 0, b = 0;
			while(s[cnt]!='+')
			{
				a*=10;
				a+=s[cnt]-'0';
				cnt++;
			}
			cnt++;
			while(cnt<s.size())
			{
				b*=10;
				b+=s[cnt]-'0';
				cnt++;
			}
			printf("%d\n", a+b);
		}
	}
}