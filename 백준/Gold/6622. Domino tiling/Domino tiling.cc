#include<bits/stdc++.h>
using namespace std;

int m, n, k;
int b[20][20];
int t[10][10];
int s;

const char d[7] = " u] [n";

int notcovered(int r, int c)
{
	if(b[r][c]>=0 && b[r][c]<=9) return 1; 
	return 0;
}

int inside(int r, int c)
{
	if(r>=0 && r<m && c>=0 && c<n) return 1; 
	return 0;
}

int count(int r, int c)
{
	int ret, rdif, cdif;

	ret = 0;
	for(rdif=-1; rdif<=1; rdif++)
	{
		for(cdif=-1; cdif<=1; cdif++)
		{
			if(abs(rdif+cdif)==1)
			{
				if(inside(r+rdif, c+cdif) && notcovered(r+rdif,c+cdif))
				{
					if(t[b[r][c]][b[r+rdif][c+cdif]]) ret++;
				}
			}
		}
	}
	return ret;
}

int bt()
{
	int minr=-1,minc=-1,min=-1,tmp;
	int r,c,rdif, cdif;
	int undo[2], ret=0;
	
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++) 
		{	
			if(notcovered(r,c)) 
			{ 
				tmp = count(r,c);
				if(min==-1 || min>tmp) 
				{ 
					min = tmp; 
					minr = r; 
					minc = c; 
				}
			}
		}
	}
	
	if(min==-1)
	{
		if(s) return 1;
		s = 1;
		for(r=0;r<m;r++) 
		{
			for(c=0;c<n;c++) 
			{
				if(b[r][c]==-1) printf("X");
				else printf("%c", d[b[r][c]-10]);
			}
			printf("\n");
		}
		return 1;
	}
	
	if(min==0) return 0;
		
	for(rdif=-1; rdif<=1; rdif++) 
	{
		for(cdif=-1; cdif<=1; cdif++)
		{
			if(abs(rdif+cdif)==1)
			{
				if(inside(minr+rdif, minc+cdif) && notcovered(minr+rdif,minc+cdif))
				{
					if(t[b[minr][minc]][b[minr+rdif][minc+cdif]])
					{
						undo[0] = b[minr][minc]; undo[1] = b[minr+rdif][minc+cdif];
						t[undo[0]][undo[1]] = t[undo[1]][undo[0]] = 0;
						b[minr][minc] = 10+2*(1+rdif)+1+cdif;
						b[minr+rdif][minc+cdif] = 10+2*(1-rdif)+1-cdif;
						ret += bt();
						b[minr][minc] = undo[0]; b[minr+rdif][minc+cdif] = undo[1];
						t[undo[0]][undo[1]] = t[undo[1]][undo[0]] = 1;
					}
				}
			}
		}
	}
	return ret;
}

int main()
{
	
	while(1)
	{
		int tmp, tmp2;
		char tmpc;
		scanf("%d%d%d", &m, &n, &k);
		if(m==0&&n==0&&k==0) return 0;
		
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				t[i][j]=0;
			}
		}
		for(int i=0;i<k;i++) 
		{
			scanf("%d%d", &tmp, &tmp2);
			t[tmp][tmp2] = t[tmp2][tmp] = 1;
		}
		tmp = m*n-2*k;
		for(int i=0;i<m;i++) 
		{
			for(int j=0;j<n;j++)
			{
				scanf(" %c ", &tmpc);
				if(tmpc=='X') b[i][j] =-1;
				else b[i][j] = tmpc-'0';
			}
		}
		s = 0;
		tmp = bt();
		if(tmp==0) printf("impossible\n");
		else printf("%d\n", tmp-1);
		printf("\n");		
	}
	return 0;
}