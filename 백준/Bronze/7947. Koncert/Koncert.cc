#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int x, y, z;
		int r=0, g=0, b=0;
		for(int i=1;i<=10;i++)
		{
			scanf("%d%d%d", &x, &y, &z);
			r+=x, g+=y, b+=z; 
		}
		if(r%10>=5) printf("%d ", r/10+1);
		else printf("%d ", r/10);
		if(g%10>=5) printf("%d ", g/10+1);
		else printf("%d ", g/10);
		if(b%10>=5) printf("%d\n", b/10+1);
		else printf("%d\n", b/10);
	}
}