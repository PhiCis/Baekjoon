#include<iostream>
using namespace std;
double a, b, c, d, A, B;
int main()
{
    while(1)
    {
        cin>>a>>b;
        if(a==-1&&b==-1) return 0;
        if(a==0&&b==0)
        {
            cout<<(int)(A/B*d+0.5)<<"\n";
            A=B=c=d=0;
        }
        else
        {
            if(d<b) goto skip;
            A+=(a-c);
            B+=(d-b);
        skip:;
            c=a;
            d=b;
        }
    }
}
