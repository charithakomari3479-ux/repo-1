#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--){
        vector<int>v(3);
        for(int i=0;i<3;i++)cin>>v[i];
        sort(v.begin(),v.end());
        if(v[2]-v[1]==1 && v[1]-v[0]==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}