#include<bits/stdc++.h>
using namespace std;

int sos(long n){
  double rem=0;
  while(n){
    if(n%10 == 0){
      return 0;
    }
    rem = rem + (n%10) * (n%10);
    n/=10;
    // cout << "rem : " << rem << " " << n << " " << endl;
  }
  // if(sqrt(rem)==ceil(sqrt(rem))){
  //   return 1;
  // }
  // else{
  //   return 0;
  // }
  // cout << "Rem " << rem<<endl;
  // cout << sqrt(rem) <<" " << floor(sqrt(rem)) <<endl;
  return ((sqrt(rem) - floor(sqrt(rem))) == 0);
}

int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    long oper=pow(10, n-1);

    while(1){
      // long temp=oper;
      if(sos(oper)){
        break;
      }
      oper++;
    }


    cout << oper << endl;
  }
}
