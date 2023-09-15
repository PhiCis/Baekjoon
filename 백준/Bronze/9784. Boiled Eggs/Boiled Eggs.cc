#include<bits/stdc++.h>
using namespace std;

int t, a, b, c, d[110];

int main()
{
    cin>>t;
    for(int x=1;x<=t;x++)
    {
        cin>>a>>b>>c;
        for(int i=1;i<=a;i++)
        {
            cin>>d[i];
        }
        sort(d+1, d+a+1);
        int tmp=0;
        cout<<"Case "<<x<<": ";
        for(int i=1;i<=a;i++)
        {
            if(i>b)
            {
                cout<<i-1<<"\n";
                goto skip;
            }
            if(tmp+d[i]>c)
            {
                cout<<i-1<<"\n";
                goto skip;
            }
            tmp+=d[i];
        }
        cout<<a<<"\n";
    skip:;
    }
}