#include<bits/stdc++.h>
using namespace std;

int n;
int in[100010], ininv[100010], post[100010];

void pre(int inl, int inr, int postl, int postr)
{
	if(inl>inr||postl>postr) return;
	printf("%d ", post[postr]);
	int key=ininv[post[postr]];
	pre(inl, key-1, postl, key-inl+postl-1);
	pre(key+1, inr, key-inl+postl, postr-1);
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &in[i]);
		ininv[in[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &post[i]);
	}
	pre(1, n, 1, n);
	return 0;
} 