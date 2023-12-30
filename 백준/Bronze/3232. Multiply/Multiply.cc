#include<bits/stdc++.h>
using namespace std;

int t, a, b, c;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		int m[10]={0,};
		int tmp=a;
		int k;
		while(tmp)
		{
			m[tmp%10]=1;
			tmp/=10;
		}
		tmp=b;
		while(tmp)
		{
			m[tmp%10]=1;
			tmp/=10;
		}
		tmp=c;
		while(tmp)
		{
			m[tmp%10]=1;
			tmp/=10;
		}
		for(int i=9;i>=0;i--)
		{
			if(m[i])
			{
				k=i+1;
				break;
			}
		}
		for(int i=k;i<=16;i++)
		{
			int tmp;
			int A=a, B=b, C=c;
			int AA=0, BB=0, CC=0;
			tmp=1;
			while(A)
			{
				AA+=tmp*(A%10);
				A/=10;
				tmp*=i;
			}
			tmp=1;
			while(B)
			{
				BB+=tmp*(B%10);
				B/=10;
				tmp*=i;
			}
			tmp=1;
			while(C)
			{
				CC+=tmp*(C%10);
				C/=10;
				tmp*=i;
			}
//			cout<<AA<<BB<<CC<<"\n";
			if(AA*BB==CC)
			{
				cout<<i<<"\n";
				goto skip;
			}
		}
		cout<<0<<"\n";
		skip:;
	}
}