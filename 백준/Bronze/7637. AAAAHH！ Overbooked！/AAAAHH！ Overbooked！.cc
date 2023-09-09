#include<bits/stdc++.h>
using namespace std;


int main()
{
	while(1)
	{
		int n;
		vector<int> v(24*60, 0);
		cin>>n;
		if(!n) return 0;
		for(int i=1;i<=n;i++)
		{
			int a, b, c, d;
			scanf("%d:%d-%d:%d", &a, &b, &c, &d);
			for(int j=a*60+b;j<c*60+d;j++)
			{
				v[j]+=1;
			}
		}
		for(int i=0;i<24*60;i++)
		{
			if(v[i]>=2)
			{
				cout<<"conflict\n";
				goto skip;
			}
		}
		cout<<"no conflict\n";
		skip:;
	}
}