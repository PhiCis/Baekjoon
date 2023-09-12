#include<bits/stdc++.h>
using namespace std;

int w, n, p, h, ans;

int main()
{
	scanf("%d%d%d", &w, &n, &p);
	for(int i=1;i<=p;i++){
		scanf("%d", &h);
		if(h>=w&&h<=n) ans++;
	}
	printf("%d", ans);
}