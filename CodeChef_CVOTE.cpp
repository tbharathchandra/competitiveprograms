#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n,m; cin>>n>>m;
    map<string, string> nm;
    map<string, ll> ncs;
    map<string, ll> ncos;

    for(ll i=0;i<n;i++){
        string str1,str2; cin>>str1>>str2;
        nm[str1]=str2;
    }
    for(ll i=0;i<m;i++){
        string str; cin>>str;
        ncs[str]++;
        ncos[nm[str]]++;
    }

    ll max1=-1;
    string ch, cn;
    for(auto i = ncs.begin(); i!=ncs.end();i++){
        if(i->second>max1){
            max1=i->second;
            ch=i->first;
        }
    }
    max1=-1;
    for(auto i = ncos.begin(); i!=ncos.end();i++){
        if(i->second>max1){
            max1=i->second;
            cn=i->first;
        }
    }
    cout<<cn<<" "<<ch<<"\n";

    
    return 0;
}
