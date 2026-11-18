#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--){
        int x,y;cin>>x>>y;int a=0;
        vector<pair<int,int>>v;
        for(int i=0;i<y;i++){
            int p,q;cin>>p>>q;
            v.push_back(make_pair(p,q));
        }
        sort(v.begin(), v.end(), [](pair<int, int>& a,pair<int, int>& b) {
             if (a.second != b.second) 
                return a.second > b.second;
            return a.first > b.first; 
        });
        map<int,int>m;
        for(int i=0;i<y;i++) m[v[i].first]+=v[i].second;
        for(int i=0;i<min(x,y);i++){
            a+=v[i].second;
        }
        cout<<a<<endl;
    }
}