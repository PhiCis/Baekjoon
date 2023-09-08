#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s.size()>=1&&(s[s.size()-1]=='a'||s[s.size()-1]=='o'||s[s.size()-1]=='u')) cout<<s<<"s\n";
		else if(s.size()>=1&&s[s.size()-1]=='i') cout<<s<<"os\n";
		else if(s.size()>=1&&s[s.size()-1]=='y')
		{
			for(int i=0;i<s.size()-1;i++) cout<<s[i];
			cout<<"ios\n";
		}
		else if(s.size()>=1&&(s[s.size()-1]=='l'||s[s.size()-1]=='r'||s[s.size()-1]=='v')) cout<<s<<"es\n";
		else if(s.size()>=1&&s[s.size()-1]=='n')
		{
			for(int i=0;i<s.size()-1;i++) cout<<s[i];
			cout<<"anes\n";
		}
		else if(s.size()>=2&&s[s.size()-2]=='n'&&s[s.size()-1]=='e')
		{
			for(int i=0;i<s.size()-2;i++) cout<<s[i];
			cout<<"anes\n";
		}
		else if(s.size()>=1&&(s[s.size()-1]=='t'||s[s.size()-1]=='w')) cout<<s<<"as\n";
		else cout<<s<<"us\n";
	}
}