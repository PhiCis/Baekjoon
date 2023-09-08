#include<bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
	scanf("%d%d", &n, &m);
	if(n==1) printf("1");
	else if(n==2)
	{
		if(m<=2) printf("1");
		else if(m<=4) printf("2");
		else if(m<=6) printf("3");
		else printf("4");
	}
	else
	{
		if(m<=4) printf("%d", m);
		else if(m<=6) printf("4");
		else printf("%d", m-2);
	}
}