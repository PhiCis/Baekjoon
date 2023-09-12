#include<bits/stdc++.h>
using namespace std;

int n;
string a, b;

int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	while(n--)
	{
		int A=0, B=0;
		cin>>a>>b;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]=='1'&&b[i]=='0') A++;
			if(a[i]=='0'&&b[i]=='1') B++;
		}
		printf("%d\n", max(A, B));
	}
}