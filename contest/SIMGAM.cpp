#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long rows;
    cin >> rows;
    long chef[rows], ramsey[rows];

    vector<long> coins;
    for(int i=0;i<rows;i++){
      long size;
      cin >> size;
      for(int j=0;j<size;j++){
        long x;
        cin >> x;
        coins[i].push_back(x);
        if(j==0)chef[i]=x;
        if(j==size-1)ramsey[i]=x;
      }
    }

    


  }
}
