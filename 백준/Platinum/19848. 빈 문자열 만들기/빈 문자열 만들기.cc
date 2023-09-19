#include<bits/stdc++.h>
using namespace std;

string s;
vector<int> v;
vector<pair<int, int> > ans;
int main()
{
    cin>>s;
    if(s[0]=='1')
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') s[i]='0';
            else s[i]='1';
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(v.empty())
        {
            if(s[i]=='0') v.push_back(1);
            else v.push_back(-1);
        }
        else
        {
            if(s[i]=='0')
            {
                if(v[v.size()-1]>0)
                {
                    v[v.size()-1]++;
                }
                else
                {
                    v.push_back(1);
                }
            }
            else
            {
                if(v[v.size()-1]<0)
                {
                    v[v.size()-1]--;
                }
                else
                {
                    v.push_back(-1);
                }
            }
        }
        if(v.size()>=4)
        {
            if(-v[1]>=v[2])
            {
                ans.push_back({v[0]-v[1]-v[2]+1, v[0]-v[1]+v[2]});
                v=vector<int>{v[0], v[3]+v[1]+v[2]};
            }
            else
            {
                ans.push_back({v[0]+1, v[0]-v[1]-v[1]});
                v=vector<int>{v[0]+v[1]+v[2], v[3]};
            }
        }
    }
    if(v.size()==3)
    {
        ans.push_back({v[0]-v[1]-v[2]+1, v[0]-v[1]+v[2]});
        ans.push_back({1, v[0]+v[0]});
    }
    else
    {
        ans.push_back({1, v[0]-v[1]});
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++) cout<<ans[i].first<<" "<<ans[i].second<<"\n";
}
