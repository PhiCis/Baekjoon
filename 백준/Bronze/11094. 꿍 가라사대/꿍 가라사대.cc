#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int main()
{
	scanf("%d\n", &n);
	while(n--)
	{
		getline(cin, s);
		if(s[0]=='S'&&s[1]=='i'&&s[2]=='m'&&s[3]=='o'&&s[4]=='n'&&s[5]==' '&&s[6]=='s'&&s[7]=='a'&&s[8]=='y'&&s[9]=='s')
		{
			for(int i=10;i<s.size();i++)
			{
				printf("%c", s[i]);
			}
			printf("\n");
		}
	}
}