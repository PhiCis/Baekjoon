#include<bits/stdc++.h>
using namespace std;

int a[6], b[6], c[6];

int main()
{
	for(int i=0;i<6;i++) cin>>a[i];
	for(int i=0;i<6;i++) cin>>b[i];
	for(int i=0;i<6;i++) cin>>c[i];
	int cnt1=0, cnt2=0, ans1=0, ans2=0;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(a[i]>b[j]) ans1++, cnt1=1;
			if(a[i]<b[j]) ans1--, cnt1=1;
			if(a[i]>c[j]) ans2++, cnt2=1;
			if(a[i]<c[j]) ans2--, cnt2=1;
		}
	}
	if(cnt1==0||ans1<0||cnt2==0||ans2<0){}
	else{
		cout<<1;
		return 0;
	}
	cnt1=0, cnt2=0, ans1=0, ans2=0;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(b[i]>a[j]) ans1++, cnt1=1;
			if(b[i]<a[j]) ans1--, cnt1=1;
			if(b[i]>c[j]) ans2++, cnt2=1;
			if(b[i]<c[j]) ans2--, cnt2=1;
		}
	}
	if(cnt1==0||ans1<0||cnt2==0||ans2<0){}
	else{
		cout<<2;
		return 0;
	}
	cnt1=0, cnt2=0, ans1=0, ans2=0;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(c[i]>b[j]) ans1++, cnt1=1;
			if(c[i]<b[j]) ans1--, cnt1=1;
			if(c[i]>a[j]) ans2++, cnt2=1;
			if(c[i]<a[j]) ans2--, cnt2=1;
		}
	}
	if(cnt1==0||ans1<0||cnt2==0||ans2<0){}
	else{
		cout<<3;
		return 0;
	}
	cout<<"No dice";
	return 0;
}