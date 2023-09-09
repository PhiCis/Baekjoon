#include<stdio.h>
int X[6]={1, -1, 0, 0, 0, 0};//상하 
int Y[6]={0, 0, 1, -1, 0, 0};//전후 
int Z[6]={0, 0, 0, 0, 1, -1};//좌우
int board[105][105][105];//[h][n][m] order
int check[105][105][105];
int queue[1000010][3];
int front, rear;
int m, n, h;
int x, y, z;
int i, j, k;
int day;
int main()
{
	scanf("%d%d%d", &m, &n, &h);
	for(i=0;i<=h+1;i++){
		for(j=0;j<=n+1;j++){
			for(k=0;k<=m+1;k++){
				board[i][j][k]=-1;//board 테두리도 벽으로 취급
			}
		}
	}
	for(i=1;i<=h;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=m;k++){
				scanf("%d", &board[i][j][k]);
				if(board[i][j][k]==1){
					queue[rear][0]=i;
					queue[rear][1]=j;
					queue[rear][2]=k;
					rear++;
				}
			}
		}
	}
	while(front<rear){
		x=queue[front][0];
		y=queue[front][1];
		z=queue[front][2];
		for(i=0;i<6;i++){
			if(x+X[i]<=h && x+X[i]>0 && y+Y[i]&& y+Y[i]>0 && z+Z[i]<=m && z+Z[i]>0 && board[x+X[i]][y+Y[i]][z+Z[i]]==0){
				board[x+X[i]][y+Y[i]][z+Z[i]]=1;
				check[x+X[i]][y+Y[i]][z+Z[i]]=check[x][y][z]+1;
				queue[rear][0]=x+X[i];
				queue[rear][1]=y+Y[i];
				queue[rear][2]=z+Z[i];
				rear++;
			}
		}
		front++;
	}
	for(i=1;i<=h;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=m;k++){
				if(day<check[i][j][k]) day=check[i][j][k];
				if(board[i][j][k]==0){
					printf("-1");
					return 0;
				}
			}
		}
	}
	printf("%d", day);
	return 0;
}