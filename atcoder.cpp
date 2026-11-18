#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x,y;cin>>x>>y;
  vector<int>v;
  for(int i=0;i<y;i++){
    int k;cin>>k;
    v.push_back(k);
  }
  vector<int>uv;
  for(int i=0;i<x;i++){
      uv.push_back(i+1);
  }
  vector<int>s(x,0);
  for(int i=0;i<y;i++){
    reverse(uv.begin(),uv.end()+v[i]);
    for(int j=0;j<v[i];j++){
        s[i]=1-s[i];
    }
  }
  for(int i=0;i<x;i++){
      if(s[i]==0)
        v[i]=-v[i];
      cout<<v[i]<<endl;
  }
}