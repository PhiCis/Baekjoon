#include<bits/stdc++.h>
using namespace std;

int n;
int chk=1, tmp, ans, cnt=1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==cnt) chk=1;
		int k;
		cin>>k;
		if(k==0)
		{
			if(chk==1)
			{
				chk=0;
				cnt=i+2;
			}
			else
			{
				ans=max(ans, tmp);
				tmp=0;
			}
		}
		else
		{
			tmp++;
		}
	}
	cout<<max(ans, tmp);
}