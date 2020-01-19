#include<bits/stdc++.h>
using namespace std;
long long dp[6112][6112];
long solve(char s[], long i, long j){
  if(i==j||i>j){
    return 0;
  }
  else if(dp[i][j]!=-1){
    return dp[i][j];
  }
  else if(s[i]==s[j]){
    dp[i][j]=solve(s, i+1, j-1);
  }
  else{
    dp[i][j]=min(solve(s, i+1, j), solve(s, i, j-1))+1 ;
  }
  return dp[i][j];
}
int main(int argc, char const *argv[]) {
  long n;
  cin >> n;
  while(n--){
    memset(dp, -1, sizeof(dp));
    long size=0;
    char s[6112];
    cin >> s;
    for(int i=0;s[i]!='\0';i++){size++;}

    cout << solve(s, 0, size-1)<<endl;;
  }
  return 0;
}
