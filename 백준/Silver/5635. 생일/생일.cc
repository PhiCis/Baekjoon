#include<bits/stdc++.h>
using namespace std;

int n;
struct A{
	string s;
	int a, b, c;
};
A a[100];
bool cmp(A a, A b)
{
	if(a.c!=b.c)
	{
		return a.c<b.c;
	}
	if(a.b!=b.b)
	{
		return a.b<b.b;
	}
	if(a.a!=b.a)
	{
		return a.a<b.a;
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].s>>a[i].a>>a[i].b>>a[i].c;
	}
	sort(a+1, a+1+n, cmp);
	cout<<a[n].s<<"\n"<<a[1].s;
}