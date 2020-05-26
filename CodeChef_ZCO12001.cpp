#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n; cin>>n;
    ll d=0, ni=0, n0=0, maxd=0, maxdi=0, maxn0=0;
    stack<ll> st;
    for(ll i=0;i<n;i++){
        int in; cin>>in;
        if(in==1){
            st.push(i);
            d = st.size();
        }else{
            if(d>maxd){
                maxd=d;
                maxdi = i;
            }
            n0 = i-st.top()+1;
            if(n0>maxn0){
                maxn0 = n0;
                ni = st.top()+1;
            }
            st.pop();
        }
    }
    cout<<maxd<<" "<<maxdi<<" "<<maxn0<<" "<<ni<<"\n";
    return 0;
}
