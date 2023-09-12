#include<bits/stdc++.h>
using namespace std;

char a[110];
int cnt;

int main()
{
	scanf("%s", a);
	int len = strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]==',') cnt++;
	}
	printf("%d", cnt+1);
}