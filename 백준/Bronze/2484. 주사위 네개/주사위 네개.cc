#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, d, i, ans, M;
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(a==b&&b==c&&c==d) ans=50000+5000*a;
		else if((a==b&&b==c)||(a==b&&b==d)||(a==c&&c==d)) ans=10000+1000*a;
		else if(b==c&&c==d) ans=10000+1000*b;
		else if((a==b&&c==d)||(a==d&&b==c)) ans=2000+500*a+500*c;
		else if((a==c&&b==d)) ans=2000+500*a+500*b;
		else if(a==b||a==d||a==c) ans=1000+100*a;
		else if(b==c||b==d) ans=1000+100*b;
		else if(c==d) ans=1000+100*c;
		else ans=100*max(a, max(b, max(c, d)));
		
		if(ans>M) M=ans;
	}
	printf("%d", M);
	return 0;
}