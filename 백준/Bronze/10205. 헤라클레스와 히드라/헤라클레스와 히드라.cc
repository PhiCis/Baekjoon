#include<bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &k);
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='c') k++;
			else k--;
		}
		cout<<"Data Set "<<i<<":\n"<<k<<"\n\n";
	}
}