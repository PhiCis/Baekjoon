#include<bits/stdc++.h>
using namespace std;
char a[1010], b[1010];
int A[30], B[30];
int ans;
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		A[a[i]-'a']++;
	}
	scanf(" %s", b);
	for(int i=0;i<strlen(b);i++)
	{
		B[b[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		ans+=abs(A[i]-B[i]);
	}
	printf("%d", ans);
}