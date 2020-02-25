#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin >> n;
  for(int i=1;i<=n;i++){
    if(i%5==0 && i%3==0){
      cout << "fizzbuzz";
    }
    else if(i%5==0){
      cout <<"buzz";
    }
    else if(i%3==0){
      cout <<"fizz";
    }
    else{
      cout<<i;
    }
  }
}
