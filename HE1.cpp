#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n, p;
    cin >> n >> p;
    long milk[n], apple[n], diff[n];
    for(int i=0;i<n;i++){
      cin >> milk[i];
    }
    for(int i=0;i<n;i++){
      cin >> apple[i];
      diff[i] = apple[i]-milk[i];
    }
    long index = -1;
    long min;
    for(int i=0;i<n;i++){
      min=INT_MAX;
      for(int j=i;j<=i+p;j++){
        if(diff[j]<min){
          min = diff[j];
          index=diff[j];
        }
      }
    }

  }
}
