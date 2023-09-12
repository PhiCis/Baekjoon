#include<bits/stdc++.h>
using namespace std;

int main()
{
	int w, h, p, q, t;
	scanf("%d%d", &w, &h);
	scanf("%d%d", &p, &q);
	scanf("%d", &t);
	p+=t, q+=t;
	p%=(2*w), q%=(2*h);
	if(p>=w)
	{
		printf("%d ", 2*w-p);
	}
	else
	{
		printf("%d ", p);
	}
	if(q>=h)
	{
		printf("%d ", 2*h-q);
	}
	else
	{
		printf("%d ", q);
	}
}