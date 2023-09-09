#include <bits/stdc++.h>
using namespace std;
int dp[21][21][21];
int a, b, c;

int w(int x, int y, int z) 
{
    if(x<=0||y<=0||z<=0) return 1;
    if(x>20||y>20||z>20) return w(20, 20, 20);
    int &ret=dp[x][y][z];
    if(ret) return ret;
    if(x<y&&y<z) return ret=w(x, y, z-1)+w(x, y-1, z-1)-w(x, y-1, z);
    return ret=w(x-1, y, z)+w(x-1, y-1, z)+w(x-1, y, z-1)-w(x-1, y-1, z-1);
}

int main()
{
	while(1)
	{
		scanf("%d%d%d", &a, &b, &c);
		if(a==-1&&b==-1&&c==-1) return 0;
		printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
	}
}