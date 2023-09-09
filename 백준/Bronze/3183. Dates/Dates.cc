#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b, c;
		cin>>a>>b>>c;
		if(a+b+c==0) break;
		if(b>12||b<1) cout<<"Invalid\n";
		else if((b==1||b==3||b==5||b==7||b==8||b==10||b==12)&&(a<1||a>31)) cout<<"Invalid\n";
		else if((b==4||b==6||b==9||b==11)&&(a<1||a>30)) cout<<"Invalid\n";
		else if(b==2&&(c%400==0||(c%4==0&&c%100!=0))&&(a<1||a>29)) cout<<"Invalid\n";
		else if(b==2&&(c%4!=0||(c%100==0&&c%400!=0))&&(a<1||a>28)) cout<<"Invalid\n";
		else cout<<"Valid\n";
	}
}