#include<bits/stdc++.h>
using namespace std;

int a[15], b[15];

void f(int i)
{
	if(i==13)
	{
		if(a[1]+a[3]+a[6]+a[8]==26 &&
		a[1]+a[4]+a[7]+a[11]==26 &&
		a[2]+a[3]+a[4]+a[5]==26 &&
		a[12]+a[10]+a[7]+a[5]==26 &&
		a[12]+a[9]+a[6]+a[2]==26 &&
		a[11]+a[10]+a[9]+a[8]==26)
		{
			cout<<"....";
			cout<<(char)(a[1]-1+'A');
			cout<<"....\n.";
			cout<<(char)(a[2]-1+'A');
			cout<<".";
			cout<<(char)(a[3]-1+'A');
			cout<<".";
			cout<<(char)(a[4]-1+'A');
			cout<<".";
			cout<<(char)(a[5]-1+'A');
			cout<<".\n..";
			cout<<(char)(a[6]-1+'A');
			cout<<"...";
			cout<<(char)(a[7]-1+'A');
			cout<<"..\n.";
			cout<<(char)(a[8]-1+'A');
			cout<<".";
			cout<<(char)(a[9]-1+'A');
			cout<<".";
			cout<<(char)(a[10]-1+'A');
			cout<<".";
			cout<<(char)(a[11]-1+'A');
			cout<<".\n....";
			cout<<(char)(a[12]-1+'A');
			cout<<"....";
			exit(0);
		}
	}
	if(a[i]) f(i+1);
	else
	{
		for(int j=1;j<=12;j++)
		{
			if(!b[j])
			{
				b[j]=1;
				a[i]=j;
				f(i+1);
				a[i]=0;
				b[j]=0;
			}
		}
	}
}

int main()
{
	int cnt=0;
	for(int i=0;i<45;i++)
	{
		char c;
		cin>>c;
		if(c=='.') continue;
		if(c=='x') cnt++;
		else
		{
			a[++cnt]=c-'A'+1;
			b[(int)(c-'A'+1)]=1;
		}
	}
	f(1);
}