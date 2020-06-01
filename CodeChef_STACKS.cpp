#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

#define INF 1e9;


int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll in; cin>>in;
            vector<ll>::iterator it = upper_bound(v.begin(), v.end(), in);
            if(it!=v.end()) v[it-v.begin()]=in;
            else v.push_back(in);
        }
        cout<<v.size()<<" ";
        for(ll i : v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
