#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void getMaxSpeedCount(){
    ll n;
    cin>>n;
    vector<ll> speeds;
    for(ll j=0;j<n;j++){
        ll tmp; cin>>tmp;
        speeds.push_back(tmp);
    }
    ll count=1;
    if(n==1) cout<<count<<"\n";
    for(ll i=1;i<n;i++){
        if(speeds[i]>speeds[i-1]){
            speeds[i]=speeds[i-1];
        } else{
            count++;
        }
    }
    cout<<count<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        getMaxSpeedCount();
    }

    return 0;
}
