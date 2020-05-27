#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while (t--)
    {
        ll n, k, m=0, ans=0;
        ll* mine;
        cin>>n>>k;
        ll in[n], last[k+1];
        for(ll i=0;i<n;i++) cin>>in[i];
        for(ll i=1;i<=k;i++) last[i] = -1;
        for(ll i=0;i<n;i++){
            last[in[i]] = i;
            mine = min_element(last+1, last+k+1);
            m = i - *mine;
            if(m>ans) ans = m;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}
