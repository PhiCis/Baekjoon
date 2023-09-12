#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		char a;
		int b, c, d, e;
		scanf(" %c %d\'%d\" %d\'%d\"", &a, &b, &c, &d, &e);
		b=b*12+c;
		c=d*12+e;
		b+=c;
		if(a=='B') b+=5;
		else b-=5;
		c=b;
		b-=8;
		c+=8;
		if(b&1) b+=1;
		if(c&1) c-=1;
		b>>=1;
		c>>=1;
		printf("Case #%d: %d\'%d\" to %d\'%d\"\n", i, b/12, b%12, c/12, c%12);
	}
}