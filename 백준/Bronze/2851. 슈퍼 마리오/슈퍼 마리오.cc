#include<bits/stdc++.h>
using namespace std;

int a[20], s[20];
vector<int> v;

bool cmp(int a, int b)
{
	if(abs(100-a)!=abs(100-b))
	{
		return abs(100-a)<abs(100-b);
	}
	else
	{
		return a>b;
	}
} 

int main()
{
	for(int i=1;i<=10;i++)
	{
		scanf("%d", &a[i]);
		s[i]=s[i-1]+a[i];
		v.push_back(s[i]);
	}
	sort(v.begin(), v.end(), cmp);
	printf("%d", v[0]);
}