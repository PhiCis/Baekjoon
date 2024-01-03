#include<bits/stdc++.h>
using namespace std;

string s, t;
int n, a1[2000200], a2[2000200];
int ans1, ans2;
map<char, int> m1={{'q', 1}, {'p', 7}, {'b', 2}, {'d', 6}, {'o', 9}, {'$', 9}, {'i', 9}, {'m', 9}, {'v', 9}, {'w', 9}, {'l', 9}, {'x', 9}};
map<char, int> m2={{'q', 1}, {'b', 7}, {'p', 2}, {'d', 6}, {'o', 9}, {'$', 9}, {'s', 9}, {'z', 9}, {'l', 9}, {'x', 9}, {'u', 3}, {'n', 5}};

int main()
{
	cin>>t;
	s="$";
	for(int i=0;i<t.size();i++)
	{
		s+=t[i];
		s+="$";
	}
	n=s.size();
//	cout<<s<<"\n";
	
	int r=0, p=0;
	for(int i=0;i<n;i++)
	{
		if(m1[s[i]]!=9)
		{
//			cout<<" ";
			continue;
		}
		if(i<=r) a1[i]=min(a1[2*p-i], r-i);
		while(i-a1[i]-1>=0&&i+a1[i]+1<n&&(m1[s[i-a1[i]-1]]+m1[s[i+a1[i]+1]]==8||(m1[s[i-a1[i]-1]]==9&&s[i-a1[i]-1]==s[i+a1[i]+1]))) a1[i]++;
		if(r<i+a1[i])
		{
			r=i+a1[i];
			p=i;
		}
//		cout<<a1[i];
	}
	for(int i=0;i<n;i++) ans1=max(ans1, a1[i]);
//	cout<<"\n";
	r=0, p=0;
	for(int i=0;i<n;i++)
	{
		if(m2[s[i]]!=9)
		{
//			cout<<" ";
			continue;
		}
		if(i<=r) a2[i]=min(a2[2*p-i], r-i);
		while(i-a2[i]-1>=0&&i+a2[i]+1<n&&(m2[s[i-a2[i]-1]]+m2[s[i+a2[i]+1]]==8||(m2[s[i-a2[i]-1]]==9&&s[i-a2[i]-1]==s[i+a2[i]+1]))) a2[i]++;
		if(r<i+a2[i])
		{
			r=i+a2[i];
			p=i;
		}
//		cout<<a2[i];
	}
	for(int i=0;i<n;i++) ans2=max(ans2, a2[i]);
//	cout<<"\n";
	if(ans1==0&&ans2==0) cout<<"NOANSWER";
	else cout<<max(ans1, ans2);
}