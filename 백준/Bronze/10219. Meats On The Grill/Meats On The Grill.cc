#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		for(int i=1;i<=a;i++)
		{
			string s;
			cin>>s;
			reverse(s.begin(), s.end());
			cout<<s<<"\n";
		}
	}
}