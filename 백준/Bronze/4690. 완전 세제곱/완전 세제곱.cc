#include<bits/stdc++.h>
using namespace std;

struct ans{
	int l, i, j, k;
};
bool cmp(ans a, ans b)
{
	if(a.l!=b.l) return a.l<b.l;
	return a.i<b.i;
}
vector<ans> v;

int main()
{
	for(int i=2;i<=100;i++)
	{
		for(int j=i;i*i*i+j*j*j<=1000000;j++)
		{
			for(int k=j;i*i*i+j*j*j+k*k*k<=1000000;k++)
			{
				int tmp = i*i*i+j*j*j+k*k*k;
				for(int l=1;l<=100;l++)
				{
					if(l*l*l==tmp)
					{
						v.push_back({l, i, j, k});
						break;
					}
				}
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0;i<v.size();i++)
	{
		printf("Cube = %d, Triple = (%d,%d,%d)\n", v[i].l, v[i].i, v[i].j, v[i].k);
	}
	

}