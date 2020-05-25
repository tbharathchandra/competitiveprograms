#include <iostream>

using namespace std;

void doexp(int i, long long n, int j){
    if(n%2==0){
        cout<<(long long)(n/2)<<"\n";
        return;
    }
    if(i==1){
        if(j==1){
            cout<<(long long)(n/2)<<"\n";
            return;
        }else if(j==2){
            cout<<(long long)(n/2)+1<<"\n";
            return;
        }
    }else if(i==2){
        if(j==2){
            cout<<(long long)(n/2)<<"\n";
            return;
        }else if(j==1){
            cout<<(long long)(n/2)+1<<"\n";
            return;
        }
    }
}

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int g; cin>>g;
        for(int k=0;k<g;k++){
            int i,j;
            long long n;
            cin>>i>>n>>j;
            doexp(i,n,j);
        }
    }
    return 0;
}#include <iostream>

using namespace std;

void doexp(int i, long long n, int j){
    if(n%2==0){
        cout<<(long long)(n/2)<<"\n";
        return;
    }
    if(i==1){
        if(j==1){
            cout<<(long long)(n/2)<<"\n";
            return;
        }else if(j==2){
            cout<<(long long)(n/2)+1<<"\n";
            return;
        }
    }else if(i==2){
        if(j==2){
            cout<<(long long)(n/2)<<"\n";
            return;
        }else if(j==1){
            cout<<(long long)(n/2)+1<<"\n";
            return;
        }
    }
}

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int g; cin>>g;
        for(int k=0;k<g;k++){
            int i,j;
            long long n;
            cin>>i>>n>>j;
            doexp(i,n,j);
        }
    }
    return 0;
}
