#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d%d", &a, &b, &c);
		int tmp=__gcd(__gcd(a, b), c);
		a/=tmp;
		b/=tmp;
		c/=tmp;
		for(int i=0;i<=10000;i++)
		{
			if(c-a*i<0) continue;
			if((c-a*i)%b==0)
			{
				int tmpa=i, tmpb=(c-a*i)/b;
				if(a<b)
				{
					while(tmpa>=b)
					{
						tmpa-=b;
						tmpb+=a;
					}
				}
				else
				{
					while(tmpb>=a)
					{
						tmpa+=b;
						tmpb-=a;
					}
				}
				printf("%d %d\n", tmpa, tmpb);
				goto skip;
			}
		}
		printf("Impossible\n");
		skip:;
	}
}