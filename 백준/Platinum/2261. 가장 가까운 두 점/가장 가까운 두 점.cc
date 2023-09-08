#include<stdio.h>
#include<algorithm>
#define INF 9e18
using namespace std;

struct P{
	int x, y;
};
P p[1000010], t[1000010];

bool cmp(const P &a, const P &b)
{
	return a.x<b.x;
}
int n;

long long m(int s, int e)
{
	if(s==e) return INF;
	if(s+1==e)
	{
		if(p[s].y>p[e].y)
		{
			int tmpx=p[s].x; p[s].x=p[e].x; p[e].x=tmpx;
			int tmpy=p[s].y; p[s].y=p[e].y; p[e].y=tmpy;
		}
		return (p[s].x-p[e].x)*(p[s].x-p[e].x)+(p[s].y-p[e].y)*(p[s].y-p[e].y);
	} 
	int mid=(s+e)/2;
	int vert=((long long)p[mid].x+p[mid+1].x)/2;
	long long tmp=min(m(s, mid), m(mid+1, e));
	
	
	//합병  
	int pntl=s, pntr=mid+1, pntt=s;
	while(pntl<=mid&&pntr<=e)
	{
		if(p[pntl].y<p[pntr].y)
		{
			t[pntt].x=p[pntl].x;
			t[pntt].y=p[pntl].y;
			pntl++;
			pntt++;
		}
		else
		{
			t[pntt].x=p[pntr].x;
			t[pntt].y=p[pntr].y;
			pntr++;
			pntt++;
		}
	}
	if(pntl>mid)
	{
		for(;pntr<=e;pntr++)
		{
			t[pntt].x=p[pntr].x;
			t[pntt].y=p[pntr].y;
			pntt++;
		}
	}
	else
	{
		for(;pntl<=mid;pntl++)
		{
			t[pntt].x=p[pntl].x;
			t[pntt].y=p[pntl].y;
			pntt++;
		}
	}
	for(pntt=s;pntt<=e;pntt++)
	{
		p[pntt].x=t[pntt].x;
		p[pntt].y=t[pntt].y;
	}
	//합병 완료 
	/*printf("%d/%d/", s, e);
	for(int i=0;i<n;i++)
	{
		printf("%d %d/", p[i].x, p[i].y);
	}
	printf("%d/%d\n", vert, tmp);*/
	
	pntt=0;
	for(int i=s;i<=e;i++)
	{
		//printf("%d: %d/", i, (p[i].x-vert)*(p[i].x-vert));
		if((long long)(p[i].x-vert)*(p[i].x-vert)<=tmp)
		{
			t[pntt].x=p[i].x;
			t[pntt].y=p[i].y;
			pntt++;
		}
	} 
	//printf("/%d\n", pntt);
	for(int i=0;i<pntt-1;i++)
	{
		for(int j=1;j<=6;j++)
		{
			
			if(i+j<max(1, pntt))
			{
				//printf("%d %d\n", i, i+j);
				if((long long)(t[i].x-t[i+j].x)*(t[i].x-t[i+j].x)+(t[i].y-t[i+j].y)*(t[i].y-t[i+j].y)<tmp) tmp=(long long)(t[i].x-t[i+j].x)*(t[i].x-t[i+j].x)+(t[i].y-t[i+j].y)*(t[i].y-t[i+j].y);
			}
		}
	}
	return tmp;
}
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &p[i].x, &p[i].y);
	}
	sort(p, p+n, cmp);
	
	printf("%lld", m(0, n-1));
}