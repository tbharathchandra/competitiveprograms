#include <bits/stdc++.h>

using namespace std;

int dp[100][10001];

int knapsack(int w[], int p[], int c, int n){
    // memoization method
    // recursive function using the 2D array dp to remainber the answer for sub questions
    if(n==0||c==0) return 0;
    if(dp[n][c]!=-1) return dp[n][c];
    if(w[n-1]<=c){
        return dp[n][c] = max(p[n-1]+knapsack(w, p, c-w[n-1], n-1), knapsack(w, p, c, n-1));
    }else{
        return dp[n][c] = knapsack(w, p, c, n-1);
    }
}

int main(){
    int n,c; cin>>c>>n;
    int weights[n], price[n]; 
    for(int i=0;i<n;i++) cin>>weights[i]>>price[i];
    memset(dp, -1, sizeof(dp));
    cout<<knapsack(weights, price, c, n)<<"\n";
    return 0;
}
