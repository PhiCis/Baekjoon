#include <stdio.h>
#include <queue>
using pii = std::pair<int,int>;

void bfs(int graph[101][101], int visit[101][101], int N, int M){
    visit[1][1] = 1;
    std::queue <pii> q;
    q.push(pii(1,1));
    int ones[2] = {1, -1};

    while( !q.empty() ){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        for( int k = 0; k < 2; k++){
            if( graph[i+ones[k]][j] == 1 && visit[i+ones[k]][j] == 0 && i+ones[k] > 0 && i+ones[k] <= N ){
                visit[i+ones[k]][j] = visit[i][j] + 1;
                q.push(pii(i+ones[k],j));
            }
            if( graph[i][j+ones[k]] == 1 && visit[i][j+ones[k]] == 0 && j+ones[k] > 0 && j+ones[k] <= M){
                visit[i][j+ones[k]] = visit[i][j] + 1;
                q.push(pii(i,j+ones[k]));
            }
        }
    } 
}
int N{0}, M{0};
int graph[101][101];
int visit[101][101];
int main(){
    
    scanf("%d%d", &N, &M);

    //그래프 표현
    for ( int i = 1; i <= N; i++){
        for (int j = 1; j<= M; j++){
            scanf("%1d", &graph[i][j]);
        }
    }
    //bfs 돌려서 visit채우기
    bfs(graph, visit, N, M);
    printf("%d", visit[N][M]);
}