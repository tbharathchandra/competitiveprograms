#include <iostream>

typedef long long ll;

using namespace std;

void find5Power(ll n){
    ll power=0;
    ll x=5;
    while((n/x)){
        power += n/x;
        x *= 5;
    }
    cout<<power<<"\n";
}

int main(){
    ll t; cin>>t;
    for(ll i=0;i<t;i++){
        ll n; cin>>n;
        find5Power(n);
    }
    return 0;
}
