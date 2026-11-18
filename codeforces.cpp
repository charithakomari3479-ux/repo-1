#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,k,t;cin>>n>>k>>t;
    vector<int>v;
    for(int i=0;i<n;i++){
        int z;cin>>z;
        v.push_back(z);
    }
    int c;
    if(v[0]!=0) c=1;
    else c=0;		  
    for(int i=0;i<n-1;i++){
	int p=v[i+1]-v[i];
        if(p>k && p%k==0)
			c+=p/k;
		else if(p>k && p%k!=0)
			c+=(p/k)+1;
	}
    cout<<c<<endl;
}
