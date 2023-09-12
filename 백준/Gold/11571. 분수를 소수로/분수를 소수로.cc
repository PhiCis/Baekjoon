#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, d, e;

int main()
{
	cin.tie(NULL);
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		c=a, d=b;
		bool m[1030]={0};
		while(1)
		{
			if(m[a%b]){
				e=a%b;
				break;
			}
			m[a%b]=1;
			a%=b;
			a*=10;
		}
		bool flag = 0;
		int cnt=0;
		while(1)
		{
			cnt++;
			
			cout<<c/d;
			if(cnt==1) cout<<".";
			if(c%d==e && flag==0)
			{
				flag=1;
				cout<<"(";
			}
			else if(c%d==e && flag==1)
			{
				cout<<")\n";
				break;
			}
			c%=d;
			c*=10;
			
		}
	}
}