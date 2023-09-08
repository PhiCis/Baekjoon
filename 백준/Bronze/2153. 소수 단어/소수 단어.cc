#include<bits/stdc++.h>
using namespace std;

bool f(int ans)
{
	if(ans==1) return true;
	for(int i=2;i*i<=ans;i++)
	{
		if(ans%i==0) return false;
	}
	return true;
}

int main()
{
	string s;
	cin>>s;
	int ans = 0;
	for(int i=0;i<s.size();i++)
	{
		ans += s[i]<='Z'?(s[i]-'A'+27):(s[i]-'a'+1);
	}
//	printf("%d", ans);
	if(f(ans)) printf("It is a prime word.");
	else printf("It is not a prime word.");
}