#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0){cout<<"left\n"; continue;}
        int c[2]={0,0};
        while(n)
        {
            c[n%2]++;
            n/=2;
        }
        if(c[0]>c[1]){cout<<"left\n";}
        if(c[0]==c[1]){cout<<"straight\n";}
        if(c[0]<c[1]){cout<<"right\n";}
    }
}