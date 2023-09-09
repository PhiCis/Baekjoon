#include<bits/stdc++.h>
using namespace std;

int n, a[110], ans;
vector<int> ANS;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		if(i==2)
		{
			ans=a[i]-a[i-1];
		}
		if(i>2)
		{
			ans=__gcd(ans, a[i]-a[i-1]);
		}
	}
	ans=abs(ans);
	for(int i=1;i*i<=ans;i++)
	{
		if(i*i==ans) ANS.push_back(i);
		else if(ans%i==0)
		{
			ANS.push_back(i);
			ANS.push_back(ans/i);
		}
	}
	sort(ANS.begin(), ANS.end());
	for(int i=1;i<ANS.size();i++)
	{
		printf("%d ", ANS[i]);
	}
}