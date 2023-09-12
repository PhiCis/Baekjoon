#include<bits/stdc++.h>
using namespace std;
int n, a, b, c;
int A, B, C;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		A+=a, B+=b, C+=c;
		if(A<30||B<30||C<30) printf("NO\n");
		else{
			printf("%d\n", min({A, B, C}));
			int m=min({A, B, C});
			A-=m, B-=m, C-=m;
		}
	}
}