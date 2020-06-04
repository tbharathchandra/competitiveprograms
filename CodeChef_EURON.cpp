#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll merge( ll arr[], ll l, ll m, ll r){
    ll n1 = m-l+1, n2 = r-m;
    ll a[n1], b[n2];

    for(ll i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(ll i=0;i<n2;i++){
        b[i] = arr[m+1+i];
    }

    ll i=0, j=0, k=l, ans=0;

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            i++;
        }else{
            arr[k] = b[j];
            ans+=m-i-l+1;
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++;
        k++;
    }
    return ans;
}

ll ms(ll arr[], ll l, ll r){
    ll ans=0;
    if(l<r){
        ll m = l+(r-l)/2;
        ans+=ms(arr, l, m);
        ans+=ms(arr, m+1, r);
        ans+=merge(arr, l, m, r);
        return ans;
    }else{
        return 0;
    }
}

int main(){
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    cout<<ms(arr, 0, n-1)<<"\n";
    return 0;
}
