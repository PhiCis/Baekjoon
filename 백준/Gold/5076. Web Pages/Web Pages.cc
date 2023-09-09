#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		getline(cin, s);
		if(s=="#") return 0;
		int pnt=0;
		stack<string> a;
		while(1)
		{
			if(pnt>=s.size())
			{
				if(a.empty())
				{
					printf("legal\n");
					goto skip;
				}
				else
				{
					printf("illegal\n");
					goto skip;
				}
			}
			if(s[pnt]=='<')
			{
				if(s[pnt+1]=='/')
				{
					pnt++;
					if(a.empty())
					{
						printf("illegal\n");
						goto skip;
					}
					string c=a.top();
					a.pop();
					pnt++;
					for(int i=0;i<c.size();i++, pnt++)
					{
						if(c[i]!=s[pnt])
						{
							printf("illegal\n");
							goto skip;
						}
					}
				}
				else if(s[pnt+1]=='a')
				{
					a.push("a");
				}
				else if(s[pnt+1]=='b'&&s[pnt+2]=='r') pnt+=5;
				else
				{
					pnt++;
					string c;
					while(s[pnt]!='>')
					{
						c+=s[pnt++];
					}
					a.push(c);
				}
			}
			pnt++;
		}
		skip:;
	}
}