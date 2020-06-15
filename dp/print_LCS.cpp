#include <bits/stdc++.h>
using namespace std;

string LCSS(string s1, string s2, int m, int n){
    int dp[m+1][n+1];

    //itialize the array
    for(int i=0;i<m+1;i++) dp[i][0] = 0;
    for(int i=0;i<n+1;i++) dp[0][i] = 0;

    //fill the remaining part
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    //backtracing using the dp array
    string res;
    int i=m, j=n;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            res.push_back(s1[i-1]);
            i--; j--;
        }else{
            if(dp[i-1][j]>dp[i][j-1]) i--;
            else j--;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){

    string s1, s2;
    cin>>s1>>s2;
    cout<<LCSS(s1, s2, s1.size(), s2.size())<<"\n";
    return 0;
}