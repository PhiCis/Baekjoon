#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int a, b;

int main()
{
	for(int i=0;i<=20;i++)
	{
		v.push_back(i);
	}
	for(int i=1;i<=10;i++)
	{
		scanf("%d%d", &a, &b);
		reverse(v.begin()+a, v.begin()+b+1);
	}
	for(int i=1;i<=20;i++)
	{
		printf("%d ", v[i]);
	}
}