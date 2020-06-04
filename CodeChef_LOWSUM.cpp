#include <bits/stdc++.h>

typedef unsigned long long ll;
using namespace std;


#define fastio cin.tie(NULL);ios_base::sync_with_stdio(false);cout.tie(NULL);

int main(){

    fastio
    int t; cin>>t;
    while(t--){
        ll k,q; cin>>k>>q;
        vector<ll> a,b;
        for(ll i=0;i<k;i++){
            ll tmp; cin>>tmp;
            a.push_back(tmp);
        } 
        for(ll i=0;i<k;i++){
            ll tmp; cin>>tmp;
            b.push_back(tmp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        priority_queue<ll> s;
        for(ll i=0;i<k;i++){
            for(ll j=0;j<k;j++){
                if(s.size()<10000){
                    s.push(a[i]+b[j]);
                }else if(a[i]+b[j]<s.top()){
                    s.pop();
                    s.push(a[i]+b[j]);   
                }else{
                    break;
                } 
                
            }
        }

        vector<ll> ans;
        while(s.size()>0){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());

        while(q--){
            ll qi; cin>>qi;
            cout<<ans[qi-1]<<"\n";
        }
        
    }
    return 0;
}
