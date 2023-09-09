#include<bits/stdc++.h>
using namespace std;

int n;
string s;
map<char, int> m;
int ans;
char ansi;

int main()
{
	scanf("%d", &n);
	cin>>s;
	for(int i=0;i<n;i++)
	{
		m[s[i]]++;
	}
	ans=min({m['A'], m['C'], m['G'], m['T']});
	if(ans==m['A']) ansi='A';
	if(ans==m['C']) ansi='C';
	if(ans==m['G']) ansi='G';
	if(ans==m['T']) ansi='T';
	printf("%d\n", ans);
	for(int i=0;i<n;i++)
	{
		printf("%c", ansi);
	}
}