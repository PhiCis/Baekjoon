#include<bits/stdc++.h>
using namespace std;

int n, m;
char c;
int ans;
map<char, int> M1[110], M2[110];

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
		cin>>c;
		M1[j][c]++;
	}
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
		cin>>c;
		M2[j][c]++;
	}
	for(int i=1;i<=m;i++)
	{
		if(M1[i]['A']*M2[i]['A']+M1[i]['C']*M2[i]['C']+M1[i]['T']*M2[i]['T']+M1[i]['G']*M2[i]['G']==0) ans++;
	}
	cout<<ans;
}