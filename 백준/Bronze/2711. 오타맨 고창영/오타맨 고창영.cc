#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a;
		string s;
		scanf("%d", &a);
		cin>>s;
		s.erase(a-1, 1);
		cout<<s<<'\n';
	}
}