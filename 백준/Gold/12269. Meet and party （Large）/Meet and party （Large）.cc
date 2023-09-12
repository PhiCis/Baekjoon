#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int b;
int re[1010][4];

struct node{
	int n, p;
	ll sump, sumd;
};

node dx[1000100], dy[1000100];
int cx, cy;

map<int, int> inx, iny;

bool cmp(node a, node b)
{
	return a.n<b.n;
}

ll caldis(int x, int y)
{

	ll dis=0;
	int ix = inx[x], iy = iny[y];
	dis += (x*dx[ix-1].sump - dx[ix-1].sumd) + (dx[cx].sumd-dx[ix].sumd - x*(dx[cx].sump-dx[ix].sump)); 
	dis += (y*dy[iy-1].sump - dy[iy-1].sumd) + (dy[cy].sumd-dy[iy].sumd - y*(dy[cy].sump-dy[iy].sump));
	return dis;
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int cnt=1; cnt<=t; cnt++)
	{
		scanf("%d", &b);
		inx.clear();
		iny.clear();	
		memset(dx,0,sizeof(dx));
		memset(dy,0,sizeof(dy));
		cx = cy = 0;
		for (int i=0; i<b; i++)
		{
			for(int j=0; j<4; j++) scanf("%d", &re[i][j]);
			int x1 = re[i][0];
			int y1 = re[i][1];
			int x2 = re[i][2];
			int y2 = re[i][3];
			for(int j=x1; j<=x2; j++) 
			{
				int tmp = inx[j]; 
				if(tmp==0) tmp = ++cx;
					
				dx[tmp].n = j;
				dx[tmp].p += y2-y1+1; 
				inx[j] = tmp;
			}
			for(int k=y1; k<=y2; k++)
			{
				int tmp = iny [k];
				if(tmp==0) tmp = ++cy;
				dy[tmp].n = k;
				dy[tmp].p += x2-x1+1;
				iny[k] = tmp; 
			}
		}
		sort(dx+1, dx+1+cx, cmp);
		sort(dy+1, dy+1+cy, cmp);
		for (int i=1; i<=cx; i++)
		{
			dx[i].sump = (long long)dx[i].p;
			dx[i].sumd = (long long)dx[i].n* dx[i].p;
			inx[dx[i].n] = i;
		}
		
		for (int i=1; i<=cy; i++)
		{
			dy[i].sump = (long long)dy[i].p;
			dy[i].sumd = (long long)dy[i].n* dy[i].p;
			iny[dy[i].n] = i;
		}
	
		for (int i=1; i<=cx; i++)
		{
			dx[i].sump += dx[i-1].sump;
			dx[i].sumd += dx[i-1].sumd;
		}
		for (int i=1; i<=cy; i++)
		{
			dy[i].sump += dy[i-1].sump;
			dy[i].sumd += dy[i-1].sumd;
		}
	
		int x=-1,y=-1;
		
		ll d=-1;
		
		for(int i=0; i<b; i++)
		{
			int x1 = re[i][0];	
			int y1 = re[i][1];
			int x2 = re[i][2];
			int y2 = re[i][3];
			
			ll tmpd=0;
			for(int j=x1; j<=x2; j++) 
			{
				for(int k=y1; k<=y2; k++)
				{
					tmpd = caldis(j,k);
					
					if(d<0 || tmpd < d || (tmpd==d && (j<x || (j==x && k<y))))
					{
						x = j;	
						y = k;
						d = tmpd;
					}
				}
			}
		
		} 
		printf("Case #%d: %d %d %lld\n", cnt,x,y,d);
	}
}