#include<bits/stdc++.h>

using namespace std;

#define MAX 1000;

int main(){

    int x1=0, x2=0, y1=0, y2=0;
    int l=0, mid=0, flag = 0, r=MAX;
    while(l<r&&r-l>1){
        mid = (l+r)/2;
        cout<<"? "<<mid<<" 0\n"<<flush;
        string in; cin>>in;
        if(in.compare("NO")==0){
            r=mid;
            if(r-l==1 || r==l) flag=1;
        }else{
            l=mid;
        }
    }
    if(flag) x1=l-1;
    else x1=l;
    y1 = 2*x1;
    l=x1, mid=0, flag = 0, r=MAX;
    while(l<r&&r-l>1){
        mid = (l+r)/2;
        cout<<"? "<<mid<<" "<<y1<<"\n"<<flush;
        string in; cin>>in;
        if(in.compare("NO")==0){
            r=mid;
            if(r-l==1 || r==l) flag=1;
        }else{
            l=mid;
        }
    }
    if(flag) x1=l-1;
    else x1=l;
    l=0, mid=0, flag=0, r=MAX;
    while(l<r&&r-l>1){
        mid = (l+r)/2;
        cout<<"? "<<"0 "<<mid<<"\n"<<flush;
        string in; cin>>in;
        if(in.compare("NO")==0){
            r=mid;
            if(r-l==1 || r==l) flag=1;
        }else{
            l=mid;
        }
    }
    if(flag) x1=l-1;
    else x1=l;

    long area = ((2*x1)*y1)+((y2-y1)*x2);
    cout<<"! "<<area<<"\n";
    return 0;
}
