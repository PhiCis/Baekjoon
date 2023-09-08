#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=0;i<3;i++)
	{
		string s;
		cin>>s;
		int ans = 1, tmp = 1;
		for(int j=1;j<8;j++)
		{
			if(s[j]==s[j-1]) tmp++;
			else tmp=1;
			ans = max(ans, tmp);
		}
		printf("%d\n", ans);
	}
}