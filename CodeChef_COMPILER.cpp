#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll count=0, g=0, ans=0;
        string str; cin>>str;
        for(char &ch : str){
            g+=1;
            if(ch=='<'){
                count+=1;
            }else{
                count-=1;
            }
            if(count<0) break;
            if(count==0){
                ans=g;
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}
