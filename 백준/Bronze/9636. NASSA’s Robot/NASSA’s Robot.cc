#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=0, y=0, cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?') cnt++;
            if(s[i]=='R') x++;
            if(s[i]=='U') y++;
            if(s[i]=='L') x--;
            if(s[i]=='D') y--;
        }
        cout<<x-cnt<<" "<<y-cnt<<" "<<x+cnt<<" "<<y+cnt<<"\n";
    }
}