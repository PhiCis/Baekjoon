#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a;
		scanf("%d", &a);
		if(a==1||a==5||a==6||a==25||a==76||a==625||a==376)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}