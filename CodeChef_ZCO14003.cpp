#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<long long> v;
    long long max=0;
    for(int i=0;i<n;i++){
        scanf("%lld", &max);
        v.push_back(max);
    }
    sort(v.begin(), v.end());
    max=0;
    for(int i=n;i>0;--i){
        if(max<(i*v[n-i])) max=i*v[n-i];
    }
    printf("%lld", max);
    return 0;
}
