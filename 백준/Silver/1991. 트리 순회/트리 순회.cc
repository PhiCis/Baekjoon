#include<bits/stdc++.h>
using namespace std;

int n;
char a, b, c;
int T[30][2];

void pre(int k)
{
	printf("%c", k-1+'A');
	if(T[k][0]) pre(T[k][0]);
	if(T[k][1]) pre(T[k][1]);
}
void in(int k)
{
	if(T[k][0]) in(T[k][0]);
	printf("%c", k-1+'A');
	if(T[k][1]) in(T[k][1]);
}
void post(int k)
{
	if(T[k][0]) post(T[k][0]);
	if(T[k][1]) post(T[k][1]);
	printf("%c", k-1+'A');
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf(" %c %c %c", &a, &b, &c);
		if(b!='.') T[a-'A'+1][0]=b-'A'+1;
		if(c!='.') T[a-'A'+1][1]=c-'A'+1;
	}
	pre(1);
	printf("\n");
	in(1);
	printf("\n");
	post(1);
}