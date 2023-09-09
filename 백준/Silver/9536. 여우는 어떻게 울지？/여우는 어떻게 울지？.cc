#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d\n", &n);
	while(n--)
	{
		string s;
		vector<string> v1, v2;
		getline(cin, s);
		string tmp = "";
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				v1.push_back(tmp);
				tmp="";
			}
			else tmp+=s[i];
		}
		v1.push_back(tmp);
		while(1)
		{
			getline(cin, s);
			if(s=="what does the fox say?") break;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]==' ')
				{
					tmp="";
				}
				else tmp+=s[i];
			}
			v2.push_back(tmp);
		}
		for(auto i:v1)
		{
			for(auto j:v2)
			{
				if(i==j) goto skip;
			}
			cout<<i<<" ";
			skip:;
		}
		printf("\n");
	}
}