#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        vector<int>v;
        for(int i=0;i<x;i++){
            int k;cin>>k;
            v.push_back(k);
        }
        set<int>st;
        for(auto c:v)
            st.insert(c);
        cout<<(st.size())*2<<endl;
    }
}