#include<bits/stdc++.h>
using namespace std;

struct A{
	int a, b;
};

A a[10];
bool cmp(A a, A b)
{
	return a.a>b.a;
}
bool cmp2(A a, A b)
{
	return a.b<b.b;
}

int main()
{
	for(int i=0;i<8;i++)
	{
		scanf("%d", &a[i].a);
		a[i].b = i+1;
	}
	sort(a, a+8, cmp);
	printf("%d\n", a[0].a+a[1].a+a[2].a+a[3].a+a[4].a);
	sort(a, a+5, cmp2);
	for(int i=0;i<5;i++)
	{
		printf("%d ", a[i].b);
	}
}