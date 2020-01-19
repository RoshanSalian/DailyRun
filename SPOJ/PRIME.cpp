#include<bits/stdc++.h>
using namespace std;

int isPrime(int x){//cout << "for " << x << endl;
  if(x==1){return 0;}
  if(x==2){return 1;}
  //cout << 2 << " " << sqrt(x)<<endl;
  for(int i=2;i<=sqrt(x);i++){
    //cout << i << " f" << x%i << endl;
     if(!(x%i)){
      return 0;
    }
  }
  //cout << "Yes " << x <<endl;
  return 1;
}

int main(){
  long t;
  cin >> t;
  while(t--){
    long n, m;
    cin >> n >> m;
    //long arr[m-n+1]={0};
    for(int i=n;i<=m;i++){
      if(isPrime(i))cout << i <<endl;
    }
    cout << endl;
  }
}
