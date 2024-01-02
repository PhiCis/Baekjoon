#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
int a, b, c, d, e, f, ans;
int m[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	scanf("%d.%d.%d%d.%d.%d", &a, &b, &c, &d, &e, &f);
	while(1)
	{
		int C[10]={0,};
		C[a%10]=C[a/10]=C[b%10]=C[b/10]=C[c/1000]=C[c%1000/100]=C[c%100/10]=C[c%10]=1;
		for(int i=0;i<v.size();i++) C[v[i]]=0;
		for(int i=0;i<10;i++) if(C[i]) goto skip;
		ans++;
		skip:;
		if(a==d&&b==e&&c==f) break;
		a++;
		if(b==2)
		{
			if(c%400==0||(c%100!=0&&c%4==0)) {if(a==30) a=1, b=3;}
			else{if(a==29) a=1, b=3;}
		}
		else
		{
			if(a==m[b]+1) a=1, b++;
		}
		if(b==13) b=1, c++;
	}
	cout<<ans;
}