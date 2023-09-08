#include<bits/stdc++.h>
using namespace std;

map<string, char> m;
int n;
string s;

int main()
{
	m[".-"]='A'; m["-."]='N';
	m["-..."]='B'; m["---"]='O';
	m["-.-."]='C'; m[".--."]='P';
	m["-.."]='D'; m["--.-"]='Q';
	m["."]='E'; m[".-."]='R';
	m["..-."]='F'; m["..."]='S';
	m["--."]='G'; m["-"]='T';
	m["...."]='H'; m["..-"]='U';
	m[".."]='I'; m["...-"]='V';
	m[".---"]='J'; m[".--"]='W';
	m["-.-"]='K'; m["-..-"]='X';
	m[".-.."]='L'; m["-.--"]='Y';
	m["--"]='M'; m["--.."]='Z';
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Case "<<i<<": ";
		for(int j=1;j<=5;j++)
		{
			cin>>s;
			cout<<m[s];
		}
		cout<<"\n";
	}
}