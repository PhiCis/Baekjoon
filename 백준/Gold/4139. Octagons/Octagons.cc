#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	while(x--)
	{
		string s;
		cin>>s;
		int n = s.size();
		int i = 0;
		string t = "";
		
		while(i<n)
		{
			t+=s[i];
			i++;
			if(t.size()>=2 && t[t.size()-1]==t[t.size()-2]) t.erase(t.size()-2, 2);
			if(t.size()>=5 && t[t.size()-1]==t[t.size()-3] && t[t.size()-2]==t[t.size()-4] && t[t.size()-3]==t[t.size()-5])
			{
				s[i-3]=t[t.size()-4];
				s[i-2]=t[t.size()-3];
				s[i-1]=t[t.size()-2];
				i-=3;
				t.erase(t.size()-5, 5);
			}
	//		cout<<s<<" "<<t<<"\n";
		}
		if(t.size()==0) cout<<"closed\n";
		else cout<<"open\n";
	}
}