//https://www.hackerrank.com/challenges/missing-numbers/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
  long n, m;
  vector<long>why;
  long lost[100001]={0};
  cin >> n;
  for(long i=0;i<n;i++){
    long x;
    cin >>x;
    lost[x]++;
  }
  cin >> m;
  long max=-1;
  for(long i=0;i<m;i++){
    long x;
    cin >> x;
    if(max<x){max=x;}
    lost[x]--;
    //if(lost[x]<0){why.push_back(x);}
  }

  // sort(why.begin(), why.end());
  // for(long i=0;i<why.size();i++){
  //   cout << why[i]<<" ";
  // }
  for(int i=0;i<=max;i++){
    if(lost[i]<0){cout << i << " ";}
  }
}
