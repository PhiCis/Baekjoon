#include<bits/stdc++.h>
using namespace std;

int n, mx=0, my=0, mz=0, Mx=1010, My=1010, Mz=1010;

int main()
{
	int x1, x2, y1, y2, z2, z1;
	scanf("%d", &n);	
	while(n--)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
		mx = max(mx, x1);
		my = max(my, y1);
		mz = max(mz, z1);
		Mx = min(Mx, x2);
		My = min(My, y2);
		Mz = min(Mz, z2);
	}
	printf("%d", max(0, Mx-mx)*max(0, My-my)*max(0, Mz-mz));
}