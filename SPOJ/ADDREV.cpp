#include<bits/stdc++.h>
using namespace std;

long rev(long x){
  queue<long>s;
  int flag=1;
  while(x){
    if(flag && (x%10) == 0){//start
      x/=10;
    }
    else{
      s.push(x%10);
      x/=10;
      flag=0;
    }
  }
  long sum=0;
  while (!s.empty()) {
    /* code */
    sum = sum*10 + s.front();
    s.pop();
  }
  // cout << sum <<endl;
  return sum;
}

int main(){
  long t;
  cin >> t;
  while(t--){
    long n, m, sum;
    cin >> n>>m;
    sum = rev(n) + rev(m);
    sum = rev(sum);
    cout << sum <<endl;
  }
}
