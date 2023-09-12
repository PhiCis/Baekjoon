#include<bits/stdc++.h>
using namespace std;

int n, ans;

bool is_prime(int i)
{
	if(i==2) return true;
	else if(i%2==0) return false;
	for(int j=3;j*j<=i;j+=2)
	{
		if(i%j==0) return false;
	}
	return true;
}

int main()
{
	cin>>n;
	for(int i=3;i<=n;i+=2)
	{
		if(is_prime(i))
		{
			int tmp = 1;
			for(int j=1;j<=i/2-1;j++)
			{
				tmp*=100;
				tmp++;
				tmp%=i;
				if(tmp==0)
				{
					if(j==i/2-1) ans++;
					break;
				}
			}
		}
	}
	printf("%d", ans);
}