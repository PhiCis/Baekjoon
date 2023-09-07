#include<bits/stdc++.h>
using namespace std;
int n, a, b;
int main()
{
    cin>>n;
    a=(n-1)/14;
    b=(n-1)%14+1;
    if(b==1||b==13) cout<<"baby";
    else if(b==2||b==14) cout<<"sukhwan";
    else if(b==5) cout<<"very";
    else if(b==6) cout<<"cute";
    else if(b==9) cout<<"in";
    else if(b==10) cout<<"bed";
    else if(b==3||b==7||b==11)
    {
        if(a>=3) cout<<"tu+ru*"<<a+2;
        else
        {
            cout<<"tu";
            for(int i=1;i<=a+2;i++) cout<<"ru";
        }
    }
    else
    {
        if(a>=4) cout<<"tu+ru*"<<a+1;
        else
        {
            cout<<"tu";
            for(int i=1;i<=a+1;i++) cout<<"ru";
        }
    }
}