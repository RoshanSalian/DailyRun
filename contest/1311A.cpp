#include<bits/stdc++.h>
using namespace std;
int main(){
  long a, b, moves=0, t;
  cin >>t;
  while(t--){
  moves=0;
  cin >> a >> b;
  while(a!=b){
    long rem=abs(a-b);
    if(a>b){
      if(rem%2==0){

      }
      else{
        rem++;
      }
      a=a-rem;
    }
    else{//a<b
      if(rem%2==1){

      }
      else{
        rem--;
      }
      a=a+rem;
    }
    moves++;
  }
  cout << moves << endl;
  }
}
