#include<bits/stdc++.h>
using namespace std;

int a, b, c;
unordered_map<long long, int> m;

int g(int a, int b, int c, int d, int e, int f)
{
    if(a==0&&b==0&&c==0)
    {
        if(e>f) return 3;
        if(e==f) return 2;
        return 1;
    }
    if(a>b) swap(a, b);
    if(a>c) swap(a, c);
    if(b>c) swap(b, c);
    long long cnt=1000000000000000*a+1000000000000*b+1000000000*c+1000000*d+1000*e+f;
    if(m[cnt]) return m[cnt];
    int tmp[3]={-1, -1, -1};
    if(d&1)
    {
        if(a>=d) tmp[0]=g(a-d, b, c, d+1, e+d, f);
        else if(a>0) tmp[0]=g(0, b, c, d+1, e+a, f);
        if(tmp[0]==3) return m[cnt]=3;
        if(b>=d) tmp[1]=g(a, b-d, c, d+1, e+d, f);
        else if(b>0) tmp[1]=g(a, 0, c, d+1, e+b, f);
        if(tmp[1]==3) return m[cnt]=3;
        if(c>=d) tmp[2]=g(a, b, c-d, d+1, e+d, f);
        else if(c>0) tmp[2]=g(a, b, 0, d+1, e+c, f);
        if(tmp[2]==3) return m[cnt]=3;
        if(tmp[0]==2||tmp[1]==2||tmp[2]==2) return m[cnt]=2;
        return m[cnt]=1;
    }
    else
    {
        if(a>=d) tmp[0]=g(a-d, b, c, d+1, e, f+d);
        else if(a>0) tmp[0]=g(0, b, c, d+1, e, f+a);
        if(tmp[0]==1) return m[cnt]=1;
        if(b>=d) tmp[1]=g(a, b-d, c, d+1, e, f+d);
        else if(b>0) tmp[1]=g(a, 0, c, d+1, e, f+b);
        if(tmp[1]==1) return m[cnt]=1;
        if(c>=d) tmp[2]=g(a, b, c-d, d+1, e, f+d);
        else if(c>0) tmp[2]=g(a, b, 0, d+1, e, f+c);
        if(tmp[2]==1) return m[cnt]=1;
        if(tmp[0]==2||tmp[1]==2||tmp[2]==2) return m[cnt]=2;
        return m[cnt]=3;
    }
}
string ans=" SDF";
int main()
{
    cin>>a>>b>>c;
    cout<<ans[g(a, b, c, 1, 0, 0)];
}
