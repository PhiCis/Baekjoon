#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d\n", &n);
	for(int i=1;i<=n;i++)
	{
		string s;
		getline(cin, s);
		vector<int> c(26);
		for(int j=0;j<s.size();j++)
		{
			if(s[j]>='a'&&s[j]<='z')
			{
				c[s[j]-'a']++;
			}
			if(s[j]>='A'&&s[j]<='Z')
			{
				c[s[j]-'A']++;
			}
		}
		for(int j=0;j<26;j++)
		{
			if(c[j]==0)
			{
				printf("missing ");
				for(int k=0;k<26;k++)
				{
					if(c[k]==0)
					{
						printf("%c", 'a'+k);
					}
				}
				goto skip;
			}
		}
		printf("pangram");
		skip:;
		printf("\n");
	}
}