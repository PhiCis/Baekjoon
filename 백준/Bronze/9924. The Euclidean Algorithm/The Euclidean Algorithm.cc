#include<bits/stdc++.h>
using namespace std;

int a, b, cnt;
int main()
{
	int a, b;
	cin>>a>>b;
	while(a!=b)
	{
		cnt++;
		int tmp=max(a, b)-min(a, b);
		b=min(a, b);
		a=tmp;
	}
	cout<<cnt;
}