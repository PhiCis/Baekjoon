#include<bits/stdc++.h>
using namespace std;

vector<int> a(3), b(3);
int tmp=1;

int main()
{
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<3;i++)
	{
		scanf("%1d", &b[i]);
	}
	sort(a.begin(), a.end());
	do{
		if(a==b)
		{
			cout<<tmp;
			return 0;
		}
		tmp++;
	}while(next_permutation(a.begin(), a.end()));
}