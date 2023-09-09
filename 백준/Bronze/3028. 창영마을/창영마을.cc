#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	vector<int> a(3);
	a[0]=1;
	for(int i=0;i<s.size();i++)
	{
		swap(a[s[i]-'A'], a[(s[i]-'A'+1)%3]);
	}
	for(int i=0;i<3;i++)
	{
		if(a[i])
		{
			printf("%d", i+1);
		}
	}
}