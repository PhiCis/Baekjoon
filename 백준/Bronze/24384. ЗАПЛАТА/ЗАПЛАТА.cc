#include<bits/stdc++.h>
using namespace std;

long long cnt=0, tmp=1;
string A="";
long long n;
int main()
{
    while(cnt<=1000010)
    {
        A+=to_string(tmp*tmp*tmp);
        cnt+=(long long)(to_string(tmp*tmp*tmp).size());
        tmp++;
    }
    cin>>n;
    cout<<A[n-1];
}