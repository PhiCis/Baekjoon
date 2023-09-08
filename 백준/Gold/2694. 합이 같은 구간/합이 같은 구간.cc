#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
	scanf("%d", &t);
    while(t--)
	{
        int n; 
        int sum = 0;
		scanf("%d", &n);
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
        	scanf("%d", &v[i]);
        	sum+=v[i];
		}
		int m = 0, s;
		bool flag;
		for(int i=0;i<n;i++)
		{
			m+=v[i];
			if(sum%m!=0) continue;
			s=0;
			flag = false;
			for(int j=i+1;j<n;j++)
			{
				s+=v[j];
				if(s>m)
				{
					flag = true;
					break;
				}
				if(s==m) s=0;
			}
			if(s==0 && !flag) break;
			skip:;
		}
		printf("%d\n", m);
    }
}