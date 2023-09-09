#include<bits/stdc++.h>
using namespace std;

int f(int k)
{
	vector<int> v = {k/1000, k/100%10, k/10%10, k%10};
	sort(v.begin(), v.end());
	return v[3]*999+v[2]*90-v[1]*90-v[0]*999;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int cnt = 0;
		while(n!=6174)
		{
			n = f(n);
			cnt++;
		}
		printf("%d\n", cnt);
	}
 } 