#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, p, l, e, r, s, n;
	while(cin>>m>>p>>l>>e>>r>>s>>n)
	{
		for(int i=1;i<=n;i++)
		{
			int nm=p/s;
			int np=l/r;
			int nl=m*e;
			m=nm;
			p=np;
			l=nl;
		}
		printf("%d\n", m);
	}
}