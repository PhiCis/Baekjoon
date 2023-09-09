#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		getline(cin, s);
		if(s=="#") return 0;
		int ans = 0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ') continue;
			ans+=(i+1)*(s[i]-'A'+1);
		}
		printf("%d\n", ans);
	}
}