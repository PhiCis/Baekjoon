//11587
#include<bits/stdc++.h>
using namespace std;

int n;
string s[1010], t;
map<char, int> m;

int main(){
    for(int i=0;i<26;i++){
        if(i<3) m[(char)('a'+i)]=2;
        else if(i<6) m[(char)('a'+i)]=3;
        else if(i<9) m[(char)('a'+i)]=4;
        else if(i<12) m[(char)('a'+i)]=5;
        else if(i<15) m[(char)('a'+i)]=6;
        else if(i<19) m[(char)('a'+i)]=7;
        else if(i<22) m[(char)('a'+i)]=8;
        else if(i<26) m[(char)('a'+i)]=9;
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    cin>>t;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(s[i].size()!=t.size()){
            continue;
        }
        for(int j=0;j<s[i].size();j++){
            if(m[s[i][j]]!=t[j]-'0'){
                goto skip;
            }
        }
        ans++;
    skip:;
    }
    cout<<ans;
}