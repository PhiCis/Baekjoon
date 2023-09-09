#include<bits/stdc++.h>
using namespace std;

int n, a, m[1000010];

int main()
{
    cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a>n||a<1||m[a])
		{
			cout<<"NIE";
			return 0;
		}
		m[a]=1;
	}
	cout<<"TAK";
}