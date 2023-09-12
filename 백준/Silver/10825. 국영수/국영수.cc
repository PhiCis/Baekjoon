#include<bits/stdc++.h>
using namespace std;
struct a{
	int k, y, s;
	char name[15];
}a[100010];
bool cmp(struct a t, struct a u)
{
	if(t.k==u.k)
	{
		if(t.y==u.y)
		{
			if(t.s==u.s)
			{
				int pnt=0;
				while(t.name[pnt]==u.name[pnt]) pnt++;
				return t.name[pnt]<u.name[pnt];
			}
			else return t.s>u.s;
		}
		else return t.y<u.y;
	}
	else return t.k>u.k;
}
int n;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf(" %s%d%d%d", a[i].name, &a[i].k, &a[i].y, &a[i].s);
	}
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i].name<<"\n";
	}
}