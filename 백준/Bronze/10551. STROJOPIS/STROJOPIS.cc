#include<bits/stdc++.h>
using namespace std;

int a[8];
string s;

int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'||s[i]=='Q'||s[i]=='A'||s[i]=='Z') a[0]++;
		if(s[i]=='2'||s[i]=='W'||s[i]=='S'||s[i]=='X') a[1]++;
		if(s[i]=='3'||s[i]=='E'||s[i]=='D'||s[i]=='C') a[2]++;
		if(s[i]=='4'||s[i]=='R'||s[i]=='F'||s[i]=='V'||s[i]=='5'||s[i]=='T'||s[i]=='G'||s[i]=='B') a[3]++;
		if(s[i]=='6'||s[i]=='Y'||s[i]=='H'||s[i]=='N'||s[i]=='7'||s[i]=='U'||s[i]=='J'||s[i]=='M') a[4]++;
		if(s[i]=='8'||s[i]=='I'||s[i]=='K'||s[i]==',') a[5]++;
		if(s[i]=='9'||s[i]=='O'||s[i]=='L'||s[i]=='.') a[6]++;
		if(s[i]=='0'||s[i]=='P'||s[i]==';'||s[i]=='/'||s[i]=='-'||s[i]=='['||s[i]=='\''||s[i]=='='||s[i]==']') a[7]++;
	}
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<"\n";
	}
}