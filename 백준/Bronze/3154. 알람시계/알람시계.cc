#include<bits/stdc++.h>
using namespace std;

pair<int, int> m[10]={{3,1},{0,0},{0,1},{0,2},{1,0},{1,1},{1,2},{2,0},{2,1},{2,2}};
vector<pair<int, int> > v;
int a, b;

int f(int x)
{
	int a[4]={x/1000, x%1000/100, x%100/10, x%10};
	int ans=0;
	for(int i=1;i<=3;i++)
	{
		ans+=abs(m[a[i-1]].first-m[a[i]].first)+abs(m[a[i-1]].second-m[a[i]].second);
	}
	return ans;
}
int main()
{
	scanf("%2d:%2d", &a, &b);
	for(int i=0;i*24+a<=99;i++)
	{
		for(int j=0;j*60+b<=99;j++)
		{
			v.push_back({f((i*24+a)*100+j*60+b),(i*24+a)*100+j*60+b});
		}
	}
	sort(v.begin(), v.end());
	printf("%02d:%02d", v[0].second/100, v[0].second%100);
}