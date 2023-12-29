#include<bits/stdc++.h>
using namespace std;

char c;
int n;

int main()
{
	cin>>c>>n;
	if(c=='R')
	{
		if(n<1||n>54)
		{
			cout<<-1;
			return 0;
		}
		if(n<=4||n>=53) cout<<"1 ";
		else if(n<=8||n>=51) cout<<"2 ";
		else if(n<=12||n>=49) cout<<"3 ";
		else if(n<=16||n>=47) cout<<"4 ";
		else if(n<=20||n>=45) cout<<"5 ";
		else if(n<=24||n>=43) cout<<"6 ";
		else if(n<=28||n>=41) cout<<"7 ";
		else if(n<=32||n>=39) cout<<"8 ";
		else if(n<=36||n>=37) cout<<"9 ";
		if(n<=36) cout<<"1 ";
		else cout<<"0 ";
		if(n&1) cout<<"-1";
		else cout<<"1";
	}
	
	else
	{
		if(n<1||n>36)
		{
			cout<<-1;
			return 0;
		}
		if(n<=4||n>=53) cout<<"1 ";
		else if(n<=8||n>=51) cout<<"2 ";
		else if(n<=12||n>=49) cout<<"3 ";
		else if(n<=16||n>=47) cout<<"4 ";
		else if(n<=20||n>=45) cout<<"5 ";
		else if(n<=24||n>=43) cout<<"6 ";
		else if(n<=28||n>=41) cout<<"7 ";
		else if(n<=32||n>=39) cout<<"8 ";
		else if(n<=36||n>=37) cout<<"9 ";
		if(n<=36) cout<<"1 ";
		else cout<<"0 ";
		if(n&1) cout<<"-1";
		else cout<<"1";
	}
}