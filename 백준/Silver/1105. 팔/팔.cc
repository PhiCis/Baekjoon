
#include<bits/stdc++.h>
using namespace std;

string l, r;

int main()
{
    cin>>l>>r;
    while(l.size()<r.size()) l="0"+l;
    int ans=0;
    for(int i=0;i<l.size();i++)
    {
        if(l[i]!=r[i]) break;
        if(r[i]=='8') ans++;
    }
    cout<<ans;
}
