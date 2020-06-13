#include <bits/stdc++.h>

using namespace std;

int dp[10001][10001];

int LCS(string s1, string s2, int m, int n){

    if(m==0||n==0) return 0; //base condition
    //memoization
    if(dp[m][n]!=-1) return dp[m][n];
    //desicision tree
    if(s1[m-1]==s2[n-1]) return dp[m][n] = 1+LCS(s1, s2, m-1, n-1);
    else return dp[m][n] = max(LCS(s1, s2, m-1, n), LCS(s1, s2, m, n-1));

}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    memset(dp, -1, sizeof(dp));
    cout<<LCS(s1,s2,s1.size(),s2.size())<<"\n";
    return 0;
}