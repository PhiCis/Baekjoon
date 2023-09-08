#include<stdio.h>
int n, r, c;
int f(int x, int y, int k)
{
	if(x==r&&y==c) return 0;
	if(x<=r&&r<x+k/2&&y<=c&&c<y+k/2) return f(x, y, k/2);
	if(x<=r&&r<x+k/2&&y<=c+k/2&&c<y+k) return k*k/4+f(x, y+k/2, k/2);
	if(x<=r+k/2&&r<x+k&&y<=c&&c<y+k/2) return k*k/2+f(x+k/2, y, k/2);
	if(x<=r+k/2&&r<x+k&&y<=c+k/2&&c<y+k) return k*k/4*3+f(x+k/2, y+k/2, k/2);
}
int main()
{
	scanf("%d", &n);
	scanf("%d%d", &r, &c);
	printf("%d", f(0, 0, 1<<n));
}