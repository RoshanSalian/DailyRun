//7
//https://www.hackerrank.com/challenges/circular-array-rotation/problem
#include<bits/stdc++.h>

using namespace std;

int main(){
  long n, k, q, arr[100006];
  cin >> n >> k >> q;
  for(long i=0;i<n;i++){
    cin >> arr[i];
  }
  while(q--){
    long x;
    cin >> x;
    long b;
    b = (x-k)%n;
    if(b < 0){b = n + b;}
    cout<<arr[(b)%n]<<endl;
  }
}
