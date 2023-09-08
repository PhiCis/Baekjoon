#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n;
	int ans=0;
	cin>>s;
	n=s.size();
	char a[10];
	for(int i=0;i<n;i++) a[i]=s[i];
	sort(a, a+n);
	bool flag;
	do{
		flag=false;
		for(int i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				flag=true;
				break;
			}
		}
		if(!flag) ans++;
	}while(next_permutation(a, a+n));
	cout<<ans;
}