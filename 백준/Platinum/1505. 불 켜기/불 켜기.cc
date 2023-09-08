#include<bits/stdc++.h>
using namespace std;

int n, m;
int c[10][10];
void input()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf(" %c", &c[i][j]);
		}
	}
}

int A[100][100];
int d[9][2]={-1, -1, -1, 0, -1, 1, 0, -1, 0, 0, 0, 1, 1, -1, 1, 0, 1, 1}; 
int row, col;
void convert()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(c[i][j]=='.') A[(i-1)*m+j][n*m+1]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int k=0;k<9;k++)
			{
				if(i+d[k][0]>=1&&i+d[k][0]<=n&&j+d[k][1]>=1&&j+d[k][1]<=m)
				{
					A[(i+d[k][0]-1)*m+j+d[k][1]][(i-1)*m+j]=1;
				}
			}
		}
	}
	row=n*m;
	col=n*m+1;
//	printf("MATRIX A:\n");
//	for(int i=1;i<=row;i++)
//	{
//		for(int j=1;j<=col;j++)
//		{
//			printf("%d ", A[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
}

int inverse(int a, int p)
{
	for(int i=1;i<p;i++)
	{
		if(a*i%p==1) return i;
	}
}
int negative(int a, int p)
{
	return a==0?a:p-a;
}

int pivot[100];
int chk[100];
vector<int> fv;
void rref(int p)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=i;j<=row;j++)
		{
			for(int k=1;k<=col;k++)
			{
				if(A[j][k])
				{
					pivot[j]=k;
					break;
				}
				if(k==col) pivot[j]=k+1;
			}
		}
		for(int j=i+1;j<=row;j++)
		{
			if(pivot[i]>pivot[j])
			{
				for(int k=1;k<=col;k++)
				{
					swap(A[i][k], A[j][k]);
				}
				swap(pivot[i], pivot[j]);
			}
		}
		if(pivot[i]==col+1) continue;
		
		if(A[i][pivot[i]]!=1)
		{
			int tmp=inverse(A[i][pivot[i]], p);
			for(int j=1;j<=col;j++)
			{
				A[i][j]=(A[i][j]*tmp)%p;
			}
		}
		
		for(int j=1;j<=row;j++)
		{
			if(i==j) continue;
			int tmp=negative(A[j][pivot[i]], p);
			for(int k=1;k<=col;k++)
			{
				A[j][k]=(A[j][k]+tmp*A[i][k])%p;
			}
		}
	}
	
//	printf("REDUCED ROW ECHELON FORM:\n");
//	for(int i=1;i<=row;i++)
//	{
//		for(int j=1;j<=col;j++)
//		{
//			printf("%d ", A[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	for(int i=1;i<=row;i++)
	{
		if(pivot[i]==col)
		{
			printf("-1");
			exit(0);
		}
	}
	
	for(int i=1;i<=row;i++)
	{
		chk[pivot[i]]=1;
	}
	for(int i=1;i<col;i++)
	{
		if(chk[i]==0)
		{
			fv.push_back(i);
		}
	}
}

int v[100];
int ans = 100;
void bitmask(int k, int p)
{
	if(k==fv.size())
	{
		for(int i=1;i<=row;i++)
		{
			v[pivot[i]]=0;
			for(int j:fv)
			{
				v[pivot[i]]=(v[pivot[i]]+negative(v[j]*A[i][j]%p, p))%p;
			}
			v[pivot[i]]=(v[pivot[i]]+A[i][col])%p;
		}
		
		int tmp=0;
		for(int i=1;i<=row;i++)
		{
//			printf("%d", v[i]);
			tmp+=v[i];
		}
//		printf("\n");
		ans=min(ans, tmp);
		return;
	}
	for(int i=0;i<p;i++)
	{
		v[fv[k]]=i;
		bitmask(k+1, p);
	}
}

void output()
{
	printf("%d", ans);
}

int main()
{
	input();
	convert();
	rref(2);
	bitmask(0, 2);
	output();
}