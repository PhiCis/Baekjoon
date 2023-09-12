#include<bits/stdc++.h>
using namespace std;

int t, n, k;
char a[26];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<26;i++) a[i]=(char)('a'+i);
		for(int i=1;i<=n;i++)
		{
			cin>>k;
			char tmp=a[k];
			cout<<tmp;
			for(int j=k-1;j>=0;j--) a[j+1]=a[j];
			a[0]=tmp;
		}
		cout<<"\n";
	}
}