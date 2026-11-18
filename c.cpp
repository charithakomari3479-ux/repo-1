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
        sort(v.begin(),v.end());int c=2;
        for(int i=1;i<x-1;i++){
            if(v[i]<v[i+1])c++;
            else break;
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=1;i<x-1;i++){
            if(v[i]<v[i+1])c++;
        }
        cout<<c<<endl;
        sort(v.begin(),v.end());
        for(int i=0;i<x;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}