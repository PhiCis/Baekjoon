#include<bits/stdc++.h>
using namespace std;

string a, b;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<a<<": ";
		vector<int> c(4, 0);
		for(int i=0;i<b.size();i++)
		{
			if(b[i]=='B') c[0]+=2;
			if(b[i]=='C') c[1]++;
			if(b[i]=='M') c[2]+=4;
			if(b[i]=='W') c[3]+=3;
		}
		if(c[0]>max({c[1], c[2], c[3]})) cout<<"The Bobcat is the dominant species\n";
		else if(c[1]>max({c[0], c[2], c[3]})) cout<<"The Coyote is the dominant species\n";
		else if(c[2]>max({c[1], c[0], c[3]})) cout<<"The Mountain Lion is the dominant species\n";
		else if(c[3]>max({c[1], c[2], c[0]})) cout<<"The Wolf is the dominant species\n";
		else cout<<"There is no dominant species\n";
	}
}