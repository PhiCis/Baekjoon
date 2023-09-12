#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> ans = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
	for(int i=1;i<=n;i++)
	{
		vector<int> tmp;
		for(int j=0;j<10;j++)
		{
			int a;
			scanf("%d", &a);
			tmp.push_back(a);
		}
		if(tmp==ans)
		{
			printf("%d\n", i);
		}
	}
}