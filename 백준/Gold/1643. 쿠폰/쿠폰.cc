#include<bits/stdc++.h>
using namespace std;

int n;
int a[25]={
	0, 
	1, 3, 11, 25, 137, 
	147, 363, 761, 7129, 7381, 
	83711, 86021, 1145993, 1171733, 1195757, 
	2436559, 42142223, 42822903, 275295799, 279175675, 
	56574159, 19093197
};
int b[25]={
	0,
	1, 1, 2, 3, 12, 
	10, 20, 35, 280, 252, 
	2520, 2310, 27720, 25740, 24024, 
	45045, 720720, 680680, 4084080, 3879876, 
	739024, 235144
};

int main()
{
	while(cin>>n)
	{
		if(b[n]==1)
		{
			cout<<a[n]<<"\n";
		}
		else
		{
			int A=a[n]/b[n], B=a[n]%b[n];
			int N=(to_string(A)).size(), M=(to_string(b[n])).size();
			for(int i=1;i<=N+1;i++) cout<<" ";
			cout<<B<<"\n";
			cout<<A<<" ";
			for(int i=1;i<=M;i++) cout<<"-";
			cout<<"\n";
			for(int i=1;i<=N+1;i++) cout<<" ";
			cout<<b[n]<<"\n";
		}
	}
}