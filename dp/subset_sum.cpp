#include <bits/stdc++.h>

using namespace std;

bool Knapsack(int arr[], int sum, int n){
    bool dp[n+1][sum+1];
    for(int i=0;i<sum+1;i++) dp[0][i]=false;
    for(int i=0;i<n+1;i++) dp[i][0]=true;

    //decision tree
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j) dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];// if you want the count of number of subsets just change the || to +
            else dp[i][j] = dp[i-1][j];
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return dp[n][sum];
}

int main(){
    int n, sum; cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<Knapsack(arr, sum, n)<<"\n";
    return 0;
}