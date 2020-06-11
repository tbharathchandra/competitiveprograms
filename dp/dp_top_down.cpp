#include<bits/stdc++.h>

using namespace std;

int Knapsack(int weights[], int price[], int w, int n){
    int dp[n+1][w+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(weights[i-1]<=j) dp[i][j] = max(price[i-1]+dp[i-1][j-weights[i-1]], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    // for(int i=0;i<n+1;i++){
    //     for(int j=0;j<n+1;j++) cout<<dp[i][j]<<" ";
    //     cout<<"\n";
    // }
    return dp[n][w];
}

int main(){
    int n, w; cin>>w>>n;
    int weights[n], price[n];
    for(int i=0;i<n;i++) cin>>weights[i]>>price[i];
    cout<<Knapsack(weights, price, w, n)<<"\n";
    return 0;
}