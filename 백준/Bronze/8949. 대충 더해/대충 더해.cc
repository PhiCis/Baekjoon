#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	int A = a.size();
	int B = b.size();
	if(A<B)
	{
		reverse(a.begin(), a.end());
		for(int i=0;i<B-A;i++)
		{
			a+="0";
		}
		reverse(a.begin(), a.end());
	}
	else
	{
		reverse(b.begin(), b.end());
		for(int i=0;i<A-B;i++)
		{
			b+="0";
		}
		reverse(b.begin(), b.end());
	}
	for(int i=0;i<max(A, B);i++)
	{
		printf("%d", (a[i]-'0')+(b[i]-'0'));
	}
}