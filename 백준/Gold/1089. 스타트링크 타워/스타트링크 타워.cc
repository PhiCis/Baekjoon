#include<bits/stdc++.h>
using namespace std;

int n;
string s[5];
string a[10];
vector<int> v[10]={
{0,1,2,3,5,6,8,9,11,12,13,14},
{2,5,8,11,14},
{0,1,2,5,6,7,8,9,12,13,14},
{0,1,2,5,6,7,8,11,12,13,14},
{0,2,3,5,6,7,8,11,14},
{0,1,2,3,6,7,8,11,12,13,14},
{0,1,2,3,6,7,8,9,11,12,13,14},
{0,1,2,5,8,11,14},
{0,1,2,3,5,6,7,8,9,11,12,13,14},
{0,1,2,3,5,6,7,8,11,12,13,14}
};
int cnt[10];
int e[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
double ans;
int main()
{
	cin>>n;
	for(int i=0;i<5;i++) cin>>s[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			for(int k=4*i;k<4*i+3;k++)
			{
				a[i]+=s[j][k];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i][4]=='#'||a[i][10]=='#')
		{
			cout<<-1;
			return 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<10;k++)
		{
			cnt[k]=1;
		}
		for(int j=0;j<15;j++)
		{
			if(a[i][j]=='#')
			for(int k=0;k<10;k++)
			{
				for(auto d:v[k])
				{
					if(j==d) goto skip;
				}
				cnt[k]=0;
				skip:;
			}
		}
		int tmp=0, ttmp=0;
		for(int k=0;k<10;k++)
		{
			if(cnt[k])
			{
				tmp+=k;
				ttmp++;
			}
		}
		ans+=(double)e[n-1-i]*tmp/ttmp;
	}
	printf("%.10lf", ans);
}