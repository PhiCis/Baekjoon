#include<stdio.h>
int n, m, k, p1, p2;
int main()
{
	scanf("%d %d %d", &n, &m, &k);
	p1=n/2>m?m:n/2;
	p2=n+m-p1*3;
	if(p2>=k) printf("%d", p1);
	else{
		printf("%d", p1-(k-p2+2)/3);
	}
}