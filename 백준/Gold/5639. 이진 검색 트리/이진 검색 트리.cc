#include<bits/stdc++.h>
using namespace std;
int n;
int pre[10010];
void post(int s, int e)
{
	if(s>e) return;
	int tmp=s+1;
	while(pre[s]>pre[tmp]&&tmp<=e) tmp++;
	post(s+1, tmp-1);
	post(tmp, e);
	printf("%d\n", pre[s]);
}
int main()
{
	while(scanf("%d", &pre[++n])!=EOF);
	post(1, n-1);
}