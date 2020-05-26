#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string str; cin>>str;
        n=(ll) n*2;
        ll sa=0, sb=0, la=0, lb=0;
        for(int i=0;i<n;i++){
            if(i%2){
                sb+=(ll)(str[i]-'0');
                lb = (ll) (n-i-1)/2;
                la = lb;
            }else{
                sa+=(ll)(str[i]-'0');
                la = (ll) (n-i-1)/2;
                lb = la+1;
            }
            if(sa>(sb+lb) || sb>(sa+la) || i==n-1){
                cout<<i+1<<"\n";
                break;
            }

        }
    }
}
