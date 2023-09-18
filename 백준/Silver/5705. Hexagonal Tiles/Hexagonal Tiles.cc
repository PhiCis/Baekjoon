#include<bits/stdc++.h>
using namespace std;

long long f[50];
int n;
int main()
{
    f[1]=f[2]=1;
    for(int i=3;i<=41;i++) f[i]=f[i-1]+f[i-2];
    while(cin>>n)
    {
        if(!n) return 0;
        cout<<f[n+1]<<"\n";
    }
}