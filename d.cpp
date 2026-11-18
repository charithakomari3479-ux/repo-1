#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--){
        int x;cin>>x;int c=0;
        string s;cin>>s;
        for(int i=0;i<x;i++){
            if(a[i]!=a[x-i-1]){
                c++;
                break;
            }
        }
        if(c==0)cout<<"0"<<endl;
        else {
            
        }
    }
}