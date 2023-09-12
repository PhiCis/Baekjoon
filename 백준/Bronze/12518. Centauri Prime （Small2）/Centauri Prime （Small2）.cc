#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		char a[110]={0};
		scanf(" %s", a);
		if(a[strlen(a)-1]=='y'||a[strlen(a)-1]=='Y') printf("Case #%d: %s is ruled by nobody.\n", i, a);
		else if(a[strlen(a)-1]=='a'||a[strlen(a)-1]=='e'||a[strlen(a)-1]=='i'||a[strlen(a)-1]=='o'||a[strlen(a)-1]=='u'||a[strlen(a)-1]=='A'||a[strlen(a)-1]=='E'||a[strlen(a)-1]=='I'||a[strlen(a)-1]=='O'||a[strlen(a)-1]=='U') printf("Case #%d: %s is ruled by a queen.\n", i, a);
		else printf("Case #%d: %s is ruled by a king.\n", i, a);
	}
}