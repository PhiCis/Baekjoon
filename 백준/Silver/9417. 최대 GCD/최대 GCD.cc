#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		int ans=0;
		string s;
		getline(cin, s);
		vector<int> a;
		for(int i=0;i<s.size();i++)
		{
			int cnt=0;
			while(s[i]>='0'&&s[i]<='9')
			{
				cnt*=10;
				cnt+=s[i]-'0';	
				i++;
			}
			a.push_back(cnt);
		}
		for(int i=0;i<a.size();i++)
		{
			for(int j=i+1;j<a.size();j++)
			{
				ans=max(ans, __gcd(a[i], a[j]));
			}
		}
		printf("%d\n", ans);
	}
}