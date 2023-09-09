#include<bits/stdc++.h>
using namespace std;

string s;
int CNT;
int a[1010][1010];
string A[1010][1010];
int m[1010];

int main()
{
	while(getline(cin, s))
	{
//		if(s=="#") break;
		CNT++;
		int cnt = 0;
		for(int i=0;i<s.size();i++)
		{
			if(i<s.size()&&s[i]!=' ')
			{
				cnt++;
				int tmp = 0;
				string tmps = "";
				while(i<s.size()&&s[i]!=' ')
				{
					tmps+=s[i];
					tmp++;
					i++;
				}
				a[CNT][cnt]=tmp;
				A[CNT][cnt]=tmps;
				m[cnt]=max(m[cnt], tmp);
			}
		}
	}
	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j<=1000;j++)
		{
			cout<<A[i][j];
			if(A[i][j+1]!="")
			{
				for(int k=0;k<=m[j]-a[i][j];k++)
				{
					cout<<" ";
				}
			}
			else break;
		}
		if(A[i+1][1]!="") cout<<"\n";
		else return 0;
	}
}