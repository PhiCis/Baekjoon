#include <iostream>
#include <queue>

using namespace std;

int R, C; 
char maze[1001][1001];

int fire[1001][1001];
int jihoon[1001][1001];

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

queue< pair<int, int> > qf;
queue< pair<int, int> > qj;

void fire_bfs()
{
	while(!qf.empty())
	{
		int fire_R = qf.front().first;
		int fire_C = qf.front().second;
		qf.pop();

		for(int i = 0; i < 4; i++)
		{
			int nr = fire_R + dr[i];
			int nc = fire_C + dc[i];

			if((nr < 0) || (nc < 0) || (nr >= R) || (nc >= C)) continue;
			if(fire[nr][nc] >= 0 || maze[nr][nc] == '#') continue;

			fire[nr][nc] = fire[fire_R][fire_C] + 1;
			qf.push(make_pair(nr, nc));
		}
	}
}

void jihoon_bfs()
{
	while(!qj.empty())
	{
		int jihoon_R = qj.front().first;
		int jihoon_C = qj.front().second;
		qj.pop();

		for(int i = 0; i < 4; i++)
		{
			int nr = jihoon_R + dr[i];
			int nc = jihoon_C + dc[i];

			if((nr < 0) || (nc < 0) || (nr >= R) || (nc >= C)) //탈출성공
			{
				cout << jihoon[jihoon_R][jihoon_C] + 1;
				return;
			}

			if(jihoon[nr][nc] >= 0 || maze[nr][nc] == '#') continue;
			if(fire[nr][nc] != -1 && (fire[nr][nc] <= jihoon[jihoon_R][jihoon_C] + 1)) continue;

			jihoon[nr][nc] = jihoon[jihoon_R][jihoon_C] + 1;
			qj.push(make_pair(nr, nc));
		}
	}

	cout << "IMPOSSIBLE";
}

int main(void) 
{
	cin >> R >> C;

	for(int i = 0; i < R; i++)
	{
		for(int j = 0; j < C; j++)
		{
			jihoon[i][j] = -1;
			fire[i][j] = -1;
			scanf(" %c", &maze[i][j]);

			if(maze[i][j] == 'F')
			{
				qf.push(make_pair(i, j));
				fire[i][j] = 0;
			}

			if(maze[i][j] == 'J')
			{
				qj.push(make_pair(i, j));
				jihoon[i][j] = 0;
			}
		}
	}

	fire_bfs();
	jihoon_bfs();

	return 0;
}