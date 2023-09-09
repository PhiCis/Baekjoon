#include<bits/stdc++.h>
using namespace std;

string s[6];

int main()
{
	for(int i=0;i<6;i++)
	{
		getline(cin, s[i]);
		while(s[i][s[i].size()-1]==' '){
			s[i].erase(s[i].end()-1);
		}
	}
	printf("Latitude %d:%d:%d\nLongitude %d:%d:%d", s[0].size(), s[1].size(), s[2].size(), s[3].size(), s[4].size(), s[5].size());
}