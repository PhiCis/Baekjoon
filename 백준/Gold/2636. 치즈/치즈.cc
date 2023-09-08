#include<bits/stdc++.h>  
using namespace std;  
  
int n, m;  
int c[110][110];  
int a[110][110];  
queue<pair<int, int> > q1, q2;  
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};  
int cnt[110][110];  
int ans, ans2;  
  
int main()  
{  
    scanf("%d%d", &n, &m);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=m;j++)  
        {  
            scanf("%d", &a[i][j]);  
            if(a[i][j]==1) c[i][j]=4;  
        }  
    }  
    q1.push({1, 1});  
    a[1][1]=2;  
    while(!q1.empty())  
    {  
        pair<int, int> now = q1.front();  
        q1.pop();  
        for(int i=0;i<4;i++)  
        {  
            pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};  
            if(next.first<=0||next.first>n||next.second<=0||next.second>m) continue;  
            if(a[next.first][next.second]==0)  
            {  
                a[next.first][next.second]=2;  
                q1.push(next);  
            }  
            if(a[next.first][next.second]==1&&cnt[next.first][next.second]==0)  
            {  
                c[next.first][next.second]--;  
                if(c[next.first][next.second]<=3)  
                {  
                    cnt[next.first][next.second]=1;  
                    ans = max(ans, cnt[next.first][next.second]);  
                    q2.push(next);  
                }  
            }  
        }  
    }  
    while(!q2.empty())  
    {  
        pair<int, int> now = q2.front();  
        q2.pop();  
          
        a[now.first][now.second]=2;  
          
        q1.push(now);  
        while(!q1.empty())  
        {  
            pair<int, int> now2 = q1.front();  
            q1.pop();  
            for(int i=0;i<4;i++)  
            {  
                pair<int, int> next = {now2.first+d[i][0], now2.second+d[i][1]};  
                if(next.first<=0||next.first>n||next.second<=0||next.second>m) continue;  
                if(a[next.first][next.second]==0)  
                {  
                    a[next.first][next.second]=2;  
                    q1.push(next);  
                }  
                if(a[next.first][next.second]==1&&cnt[next.first][next.second]==0)  
                {  
                    c[next.first][next.second]--;  
                    if(c[next.first][next.second]<=3)  
                    {  
                        cnt[next.first][next.second]=cnt[now.first][now.second]+1;  
                        ans = max(ans, cnt[next.first][next.second]);  
                        q2.push(next);  
                    }  
                }  
            }  
        }  
    }  
    printf("%d\n", ans);  
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
    		if(ans==cnt[i][j]) ans2++;
		}
	}
	printf("%d", ans2);
}  