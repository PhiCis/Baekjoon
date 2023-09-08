#include<bits/stdc++.h>
using namespace std;

int n;
string s;

map<pair<char, char> , char> m;

int main()
{
	m[{'A', 'A'}]='A';
	m[{'A', 'G'}]='C';
	m[{'A', 'C'}]='A';
	m[{'A', 'T'}]='G';
	m[{'G', 'A'}]='C';
	m[{'G', 'G'}]='G';
	m[{'G', 'C'}]='T';
	m[{'G', 'T'}]='A';
	m[{'C', 'A'}]='A';
	m[{'C', 'G'}]='T';
	m[{'C', 'C'}]='C';
	m[{'C', 'T'}]='G';
	m[{'T', 'A'}]='G';
	m[{'T', 'G'}]='A';
	m[{'T', 'C'}]='G';
	m[{'T', 'T'}]='T';
	scanf("%d", &n);
	cin>>s;
	for(int i=n-1;i>=1;i--)
	{
		s[i-1]=m[{s[i-1], s[i]}];
	}
	printf("%c", s[0]);
}