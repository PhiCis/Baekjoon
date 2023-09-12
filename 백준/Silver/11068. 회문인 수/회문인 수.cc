#include<bits/stdc++.h>
using namespace std;

vector<int> f(int a, int i)
{
	vector<int> ans;
	while(a)
	{
		ans.push_back(a%i);
		a/=i;
	}
	return ans;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a;
		scanf("%d", &a);
		for(int i=2;i<=64;i++)
		{
			vector<int> ans=f(a, i);
			vector<int> revans=ans;
			reverse(revans.begin(), revans.end());
			if(ans==revans)
			{
				printf("1\n");
				goto skip;
			}
		}
		printf("0\n");
		skip:;
	}
}