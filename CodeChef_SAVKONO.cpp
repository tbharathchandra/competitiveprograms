#include <iostream>
#include <map>
#include <algorithm>


using namespace std;

typedef long long ll;


int main(){
    int t; cin>>t;
    while (t--)
    {
        ll n, z; cin>>n>>z;
        map<ll, ll, greater<ll>> m;
        for(ll i=0;i<n;i++){
            ll tmp; cin>>tmp;
            m[tmp]++;
        }

        ll ans=0;
        // z-top element and reduce its count and insert its half
        while (z>0 && m.size()>0)
        {
            auto it = m.begin();
            z-=it->first;
            ll tmp = 1ll * (it->first/2);
            m[it->first]--;
            if(m[it->first]==0) m.erase(it);
            if(tmp!=0) m[tmp]++;
            ans++;
        }
        if(m.size()==0 && z>0) cout<<"Evacuate\n";
        else cout<<ans<<"\n";
        
    }
    
    return 0;
}
