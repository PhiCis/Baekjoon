#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		char a[30]={0};
		scanf(" %s", a);
		if(a[strlen(a)-1]=='y') printf("Case #%d: %s is ruled by nobody.\n", i, a);
		else if(a[strlen(a)-1]=='a'||a[strlen(a)-1]=='e'||a[strlen(a)-1]=='i'||a[strlen(a)-1]=='o'||a[strlen(a)-1]=='u') printf("Case #%d: %s is ruled by a queen.\n", i, a);
		else printf("Case #%d: %s is ruled by a king.\n", i, a);
	}
}