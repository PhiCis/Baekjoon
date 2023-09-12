#include<stdio.h>
int n, m;
int i, j, a[1030][1030], s[1030][1030];
int x1, x2, y1, y2;
int main()
{
	scanf("%d %d", &n, &m);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
			s[i][j]=a[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
		}
	}
	for(i=0;i<m;i++){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		printf("%d\n", s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]);
	}
}