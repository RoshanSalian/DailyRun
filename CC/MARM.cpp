#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    long n, k;
    cin >> n >> k;
    std::vector<long> v;
    for(int i=0;i<n;i++){
      long x;
      cin >> x;
      v.push_back(x);
    }
    for(int i=0;i<k;i++){
      v[i%n] = v[(i%n)]^v[n-1-(i%n)];
    }
    for(int i=0;i<n;i++){
      cout << v[i] << " ";
    }
  }
}
