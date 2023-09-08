#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	while(cin>>n)
	{
		if(!n) return 0;
		getline(cin, s);
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			getline(cin, s);
			int j=cnt;
			for(;j<s.size();j++)
			{
				if(s[j]==' ')
				{
					cnt=j;
					goto skip;
				}
			}
			cnt=j;
			skip:;
		}
		cout<<cnt+1<<"\n";
	}
}