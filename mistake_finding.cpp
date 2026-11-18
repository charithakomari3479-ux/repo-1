#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;cin>>n;int ps1=0;int ps2=0;
    vector<int>p1;vector<int>p2;
	for(int i=0;i<n;i++)
	{
	     int p1s,p2s;cin>>p1s>>p2s;
	     if(p1s>p2s)
	        p1.push_back(p1s-p2s);
	     else
	        p2.push_back(p2s-p1s);
	}
	sort(p1.begin(),p1.end());
	sort(p2.begin(),p2.end());
	int o=p1.size();int s=p2.size();
	for(int i=0;i<o;i++)
	    ps1=ps1+p1[i];
    for(int i=0;i<s;i++)
	    ps2=ps2+p2[i];
	if(ps1>ps2)
	    cout<<"1"<<" "<<p1[n-1];
	else
	    cout<<"2"<<" "<<p2[n-1];
}
