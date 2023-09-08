#include<stdio.h>
int n, m, v, a, b, A[1010][1010], cd[1010], Q[1010], rear, cb[1010], front=1;
void DFS(int v)
{
	cd[v]=1;
	printf("%d ", v);
	for(int i=1;i<=n;i++)
	{
		if(A[v][i]==1&&cd[i]==0)
		{
			DFS(i);
		}
	}
}

void BFS(int v){
	int s=v, i;
	Q[++rear]=s;
	cb[s]=1;
	while(rear>=front)
	{
		printf("%d ", s=Q[front++]);
		for(i=1;i<=n;i++){
			if(A[s][i]==1&&cb[i]==0){
				Q[++rear]=i;
				cb[i]=1;
			}
		}
	}
}
int main()
{
	scanf("%d %d %d", &n, &m, &v);
	for(int i=0;i<m;i++)
	{
		scanf("%d %d", &a, &b);
		A[a][b]=A[b][a]=1;
	}
	DFS(v);
	printf("\n");
	BFS(v);
}