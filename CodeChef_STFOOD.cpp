#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<long> pro;
        for(int j =0;j<n;j++){
            long s,v,p;
            cin>>s>>p>>v;
            pro.push_back(v*(floor(p/(s+1))));
        }
        cout<<*max_element(pro.begin(), pro.end())<<"\n";
    }
    return 0;
}
