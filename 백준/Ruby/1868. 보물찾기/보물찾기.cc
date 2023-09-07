#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> g[50050];

pair<int, int> dp(int now, int p) //현재 노드, 부모 노드 
{
	int tmp=0; //서브트리들에서 사용한 질문 횟수들의 비트 집합 (두 번째 반환값) 
	int res=0; //현재 노드에서 할 질문 횟수를 나타내는 수 
	int ret=0; //첫 번째 반환값 
	if((p==0 && g[now].size()==0)||(p!=0 && g[now].size()==1)) //리프 노드일 경우 질문 횟수는 0, 사용한 질문 횟수들의 비트 집합은 1 
	{
		return {0, 1};
	}
	
	vector<int> cnt(30, 0); //서브트리들에서 사용한 질문 횟수들의 빈도
	 
	for(auto next:g[now])
	{
		if(next==p) continue; 
		auto chk = dp(next, now);
		
		tmp|=chk.second;
		for(int j=0;j<30;j++)
		{
			if((chk.second>>j)&1) cnt[j]++;
		}
		ret=max(ret, chk.first);
	}
	for(int i=29;i>=0;i--)
	{
		if(cnt[i]>1) 
		{
			res=i+1;
			break;
		}
	}
	for(int i=res;i<=30;i++)
	{
		if((tmp>>i)%2==0)
		{
			res=i;
			break;
		}
	}
	return {max(ret, res), ((tmp>>res)|1)<<res};
}


int main()
{
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int u, v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cout<<dp(1, 0).first;
}