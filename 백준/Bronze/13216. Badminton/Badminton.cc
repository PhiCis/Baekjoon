#include<bits/stdc++.h>
using namespace std;

string s;
int A, B, AA, BB;

int main()
{
	cin>>s;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A') A++;
		else B++;
		if(A==21)
		{
			cout<<A<<"-"<<B<<"\n";
			AA++;
			A=B=0;
			if(AA==2)
			{
				cout<<"A";
				return 0;
			}
		}
		if(B==21)
		{
			cout<<A<<"-"<<B<<"\n";
			BB++;
			A=B=0;
			if(BB==2)
			{
				cout<<"B";
				return 0;
			}
		}
	}
}