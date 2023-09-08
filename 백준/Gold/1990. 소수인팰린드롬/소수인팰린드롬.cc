#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
	int ret = 0;
	while(n)
	{
		ret*=10;
		ret+=n%10;
		n/=10;
	}
	return ret;
}

bool g(int n)
{
	if(n==1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0) return false;
	}
	return true;
}

vector<int> ans;

int main()
{
	int a, b;
	ans.push_back(5);
	ans.push_back(7);
	ans.push_back(11);
	for(int i=10;i<100;i++)
	{
		int tmp=i*10+rev(i/10);
		if(g(tmp)) ans.push_back(tmp);
	}
	for(int i=100;i<1000;i++)
	{
		int tmp=i*100+rev(i/10);
		if(g(tmp)) ans.push_back(tmp);
	}
	for(int i=1000;i<10000;i++)
	{
		int tmp=i*1000+rev(i/10);
		if(g(tmp)) ans.push_back(tmp);
	}
	scanf("%d%d", &a, &b);
	for(int i=0;i<ans.size();i++)
	{
		if(ans[i]>=a&&ans[i]<=b)
		{
			printf("%d\n", ans[i]);
		}
	}
	printf("-1");
}