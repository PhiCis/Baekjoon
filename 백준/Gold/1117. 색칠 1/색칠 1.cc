#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long w, h, f, c, x1, y1, x2, y2;
    cin>>w>>h>>f>>c>>x1>>y1>>x2>>y2;
    long long ans=0;
    if(x1>=f) ans+=0;
    else if(x2>=f) ans+=(f-x1)*(y2-y1);
    else ans+=(x2-x1)*(y2-y1);
    if(x1>=w-f) ans+=0;
    else if(x2>=w-f) ans+=(w-f-x1)*(y2-y1);
    else ans+=(x2-x1)*(y2-y1);
    cout<<w*h-(c+1)*ans;
}
