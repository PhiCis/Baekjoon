#include<bits/stdc++.h>
using namespace std;

int n, m;
int main()
{
	while(1)
	{
		cin>>n>>m;
		if(n==0) return 0;
		stack<int> s;
		if(n>m) swap(n, m);
		while(n)
		{
			s.push(m/n);
			m%=n;
			swap(n, m);
		}
		int tmp=0;
		while(!s.empty())
		{
			int now=s.top();
			s.pop();
			if(now>1)
			{
				tmp=1;
			}
			else
			{
				tmp=1-tmp;
			}
		}
		if(tmp) cout<<"A wins\n";
		else cout<<"B wins\n";
	}
}