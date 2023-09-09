#include<bits/stdc++.h>
using namespace std;

map<string, int> m;

string a[12]={"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

int main()
{
	m["A"]=0;
	m["A#"]=m["Bb"]=1;
	m["B"]=m["Cb"]=2;
	m["B#"]=m["C"]=3;
	m["C#"]=m["Db"]=4;
	m["D"]=5;
	m["D#"]=m["Eb"]=6;
	m["E"]=m["Fb"]=7;
	m["E#"]=m["F"]=8;
	m["F#"]=m["Gb"]=9;
	m["G"]=10;
	m["G#"]=m["Ab"]=11;
	while(1)
	{
		string s;
		getline(cin, s);
		if(s[0]=='*') return 0;
		string tmp="";
		vector<int> ans;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				ans.push_back(m[tmp]);
				tmp="";
			}
			else
			{
				tmp+=s[i];
			}
		}
		ans.push_back(m[tmp]);
		int n;
		cin>>n;
		for(int i=0;i<ans.size();i++)
		{
			cout<<a[(ans[i]+n%12+12)%12]<<" ";
		}
		cout<<"\n";
		getline(cin, s);
	}
}