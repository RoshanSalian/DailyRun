#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  while(n){

    long res=n;
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        while(n%i==0)
          n/=i;
        res -= res/i;
      }
      // cout << i << " " << n << " " << res << endl;
    }
    if(n>1){
      res-=res/n;
    }

    cout << res << endl;
    cin >> n;
  }
}
