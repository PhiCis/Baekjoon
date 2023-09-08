#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	vector<string> v;
	for(int i=1;i<=s.size()-1;i++)
	{
		for(int j=1;j<=s.size();j++)
		{
			if(1<=s.size()-i-j)
			{
//				printf("%d %d %d\n", i, j, s.size()-i-j);
				string s1=s.substr(0, i);
				string s2=s.substr(i, j);
				string s3=s.substr(i+j, s.size()-i-j);
				reverse(s1.begin(), s1.end());
				reverse(s2.begin(), s2.end());
				reverse(s3.begin(), s3.end());
				v.push_back(s1+s2+s3);
			}	
			else break;
		}
	}
	sort(v.begin(), v.end());
	cout<<v[0];
}