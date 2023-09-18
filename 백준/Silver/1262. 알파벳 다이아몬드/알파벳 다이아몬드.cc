#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, d;
int main()
{
    cin>>n>>a>>b>>c>>d;
    for(int i=a;i<=c;i++)
    {
        for(int j=b;j<=d;j++)
        {
            int x=i, y=j;
            x%=(2*n-1); y%=(2*n-1);
            if(abs(n-1-x)+abs(n-1-y)<n) cout<<(char)('a'+(abs(n-1-x)+abs(n-1-y))%26);
            else cout<<".";
        }
        cout<<"\n";
    }
}