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
        sort(v.begin(),v.end());int c=0;
        if(v.size()==2){
            cout<<"2"<<endl;
            cout<<v[0]<<" "<<v[1]<<endl;
        }
        else if(v.size()==1){
            cout<<"1"<<endl;
            cout<<v[0]<<endl;
        }
        else if(v.size()>2){
            c=2;
            for(int i=0;i<x-1;i++){
                if(v[i]<v[i+1])c++;
                else break;
            }
            sort(v.begin(),v.end(),greater<int>());
            for(int i=0;i<x-1;i++){
                if(v[i]<v[i+1])c++;
            }
            cout<<c<<endl;
            sort(v.begin(),v.end());
            for(int i=0;i<x;i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}