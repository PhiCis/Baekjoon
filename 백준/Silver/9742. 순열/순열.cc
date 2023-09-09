#include<bits/stdc++.h>
using namespace std;

int f[11]={1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
int c[11];

int main()
{
	string s;
	int n;
	while(cin>>s>>n)
	{
		for(int i=0;i<=10;i++) c[i]=0;
		cout<<s<<" "<<n<<" = ";
		if(f[s.size()]<n)
		{
			cout<<"No permutation\n";
		}
		else
		{
			n--;
			for(int i=s.size()-1;i>=0;i--)
			{
				int tmp=n/f[i]+1;
				int cnt=0;
				for(int j=0;j<s.size();j++)
				{
					if(c[j]==0)
					{
						cnt++;
						if(cnt==tmp)
						{
							c[j]=1;
							cout<<s[j];
							break;
						}
					}
				}
				n%=f[i];
			}
			cout<<"\n";
		}
	}
}