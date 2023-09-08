#include<bits/stdc++.h>
using namespace std;

vector<int> a(8);
vector<int> t={1, 2, 3, 4, 5, 6, 7, 8};

int main()
{
	for(int i=0;i<8;i++)
	{
		scanf("%d", &a[i]);
	}
	queue<pair<vector<int>, int> > q;
	map<vector<int>, bool> m;
	q.push({a, 0});
	m[a]=true;
	while(!q.empty())
	{
		vector<int> v = q.front().first;
		int cnt = q.front().second;
		q.pop();
//		for(auto i:v){
//			printf("%d ", i);
//		}
//		printf("/%d\n", cnt);
		if(v == t)
		{
			printf("%d", cnt);
			return 0;
		}
		
		vector<int> tmp=v;
		swap(tmp[0], tmp[7]);
		swap(tmp[1], tmp[6]);
		swap(tmp[2], tmp[5]);
		swap(tmp[3], tmp[4]);
		if(!m[tmp])
		{
			m[tmp]=true;
			q.push({tmp, cnt+1});
		}
		tmp=v;
		int a=tmp[0];
		tmp[0]=tmp[1];
		tmp[1]=tmp[2];
		tmp[2]=tmp[3];
		tmp[3]=a;
		a=tmp[7];
		tmp[7]=tmp[6];
		tmp[6]=tmp[5];
		tmp[5]=tmp[4];
		tmp[4]=a;
		if(!m[tmp])
		{
			m[tmp]=true;
			q.push({tmp, cnt+1});
		}
		tmp=v;
		a=tmp[2];
		tmp[2]=tmp[1];
		tmp[1]=tmp[6];
		tmp[6]=tmp[5];
		tmp[5]=a;
		if(!m[tmp])
		{
			m[tmp]=true;
			q.push({tmp, cnt+1});
		}
		tmp=v;
		swap(tmp[0], tmp[4]);
		if(!m[tmp])
		{
			m[tmp]=true;
			q.push({tmp, cnt+1});
		}
	}
}