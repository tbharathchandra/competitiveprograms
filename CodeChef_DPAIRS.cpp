#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,m; cin>>n>>m;
    ll a[n], b[m];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];

    unordered_map<ll,pair<ll,ll>> s;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            s[a[i]+b[j]] = pair<ll,ll>(i,j);
            if(s.size()>=n+m-1){
                break;
            }
        }
        if(s.size()>=n+m-1) break;
    }

    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<it->second.first<<" "<<it->second.second<<"\n";
    }
    return 0;
}
