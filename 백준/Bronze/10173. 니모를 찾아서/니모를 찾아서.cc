#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		getline(cin, s);
		if(s=="EOI") return 0;
		for(int i=0;i<s.size()-3;i++)
		{
			if((s[i]=='N'||s[i]=='n')&&(s[i+1]=='E'||s[i+1]=='e')&&(s[i+2]=='M'||s[i+2]=='m')&&(s[i+3]=='O'||s[i+3]=='o'))
			{
				printf("Found\n");
				goto skip;
			}
		}
		printf("Missing\n");
		skip:;
	}
}