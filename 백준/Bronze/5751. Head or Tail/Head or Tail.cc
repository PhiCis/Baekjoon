#include<bits/stdc++.h>
using namespace std;
int n, a, A, B;

int main()
{
	while(1)
	{
		scanf("%d", &n);
		if(!n) return 0;
		for(int i=1;i<=n;i++){
			scanf("%d", &a);
			if(a==0) A++;
			else B++;
		}
		printf("Mary won %d times and John won %d times\n", A, B);
		A=B=0;
	}
}