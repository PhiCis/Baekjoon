#include<bits/stdc++.h>
using namespace std;

struct Pt
{
	int xp, xq;
	int edge;
};

int n;
int x[102], y[102];
int inc[102];
Pt cr[102];
int crcnt;

bool cmp(Pt e1, Pt e2)
{
	int ret = e1.xp*e2.xq-e2.xp*e1.xq;
	if(ret==0) return inc[e1.edge]-inc[e2.edge]<0;
	else return ret<0;
}

int my_round_down(int p, int q)
{
	assert(q>0);
	if(p<0) return (p-q+1)/q;
	else return p/q;
}

int my_round_up(int p, int q)
{
	assert(q>0);
	if(p<0) return p/q;
	else return (p+q-1)/q;
}

int main()
{
	int i,j,tmp;
	int tmpp1, tmpq1, tmpp2, tmpq2;
	long long area;
	int miny,maxy;
	int cw;
	while(1)
	{
		scanf("%d", &n);
		if(n==0) return 0;
		maxy = -1000; miny = 1000;
		for(int i=0;i<n;i++) 
		{
			scanf(" %d %d ", x+i, y+i);
			if(y[i]>maxy) maxy=y[i];
			if(y[i]<miny) miny=y[i];
		}
		x[n] = x[0]; y[n] = y[0];
		
		area = 0;
		for(int i=0;i<n;i++)
		{
			area += (200-(x[i]+x[i+1]))*(y[i+1]-y[i]);
		}
		if(area>0) cw = 1; else cw = 0;

		for(int i=0;i<n;i++) if(cw == (y[i+1]>y[i])) inc[i]=1; else inc[i]=-1;
		
		
		area = 0;
		for(int i=miny;i<maxy;i++)
		{
			crcnt = 0;
			for(int j=0;j<n;j++) if((y[j]<=i && y[j+1]>i) || (y[j+1]<=i && y[j]>i))
			{
				if(y[j+1]==y[j]) continue; 
				tmpp1 = x[j]*(y[j+1]-y[j]) + (i-y[j])*(x[j+1]-x[j]);
				tmpq1 = y[j+1]-y[j];
				tmpp2 = x[j]*(y[j+1]-y[j]) + (i+1-y[j])*(x[j+1]-x[j]);
				tmpq2 = y[j+1]-y[j];
	
				if((inc[j]==1 && tmpp1*tmpq2>=tmpp2*tmpq1) || (inc[j]==-1 && (tmpp1*tmpq2<=tmpp2*tmpq1)))
				{
					cr[crcnt].xp = tmpp1;	cr[crcnt].xq = tmpq1;
				}
				else
				{
					cr[crcnt].xp = tmpp2;	cr[crcnt].xq = tmpq2;
				}
				if(cr[crcnt].xq<0) {cr[crcnt].xq *= -1; cr[crcnt].xp *= -1;}
				cr[crcnt].edge = j;
				crcnt++;
			}
			sort(cr, cr+crcnt, cmp);
			tmp=0;
			for(int j=0;j<crcnt;j++)
			{
				if(tmp>0) area += max(0, (my_round_down(cr[j].xp, cr[j].xq) - my_round_up(cr[j-1].xp, cr[j-1].xq)));
				tmp+=inc[cr[j].edge];
			}
		}
		printf("%lld\n" , area);
	}
	return 0;
}