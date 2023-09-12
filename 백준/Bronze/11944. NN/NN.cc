#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	int b;
	string ans;
	cin>>a>>b;
	for(int i=1;i<=stoi(a);i++)
	{
		ans+=a;
	}
	for(int i=0;i<min(b, (int)ans.size());i++)
	{
		printf("%c", ans[i]);
	}
}