#include<bits/stdc++.h>
using namespace std;
string s;
int tmp;
int cnt;

int main()
{
	cin>>s;
	if(s.size()==1)
	{
		printf("0\n");
		if((s[0]-'0')%3) printf("NO");
		else printf("YES");
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			tmp+=s[i]-'0';
		}
		cnt++;
		while(1)
		{
			if(tmp<10)
			{
				printf("%d\n", cnt);
				if(tmp%3) printf("NO");
				else printf("YES");
				return 0;
			}
			int ttmp=0;
			while(tmp)
			{
				ttmp+=tmp%10;
				tmp/=10;
			}
			tmp=ttmp;
			cnt++;
		}
	}
}