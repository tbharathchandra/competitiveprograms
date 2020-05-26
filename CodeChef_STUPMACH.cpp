#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(){
    int t; cin>>t;
    while (t--)
    {
       ll n; cin>>n;
       vector<ll> c;
       for(int i=0;i<n;i++){
           ll tmp; cin>>tmp;
           c.push_back(tmp);
       } 
       ll m = 1e9+5;
       ll ans = 0;
       for(ll i=0;i<n;i++){
           if(m>c[i]) m=c[i];
           ans+=m;
       }
       cout<<ans<<"\n";
    }
    
    return 0;
}
