#include<bits/stdc++.h>
using namespace std;
map<long long, bool> m;

void f(long long n)
{
//    cout<<n;
    if(m[n]) return;
    long long tmp=(long long)sqrt(n);
    while(tmp*tmp<n) tmp++;
    f(tmp);
    f(tmp*tmp-n);
    m[n]=true;
    cout<<tmp<<" "<<tmp*tmp-n<<"\n";
}

long long n;
int main()
{
    m[0]=m[1]=m[2]=true;
    cin>>n;
    f(n);
}
