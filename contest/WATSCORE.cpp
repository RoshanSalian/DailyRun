#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    long arr[9]={0};
    long n;
    cin >> n;
    for(int i=0;i<n;i++){
      long p, s;
      cin >> p >> s;
      if(p<=8){
        if(arr[p]<s){
          arr[p]=s;
        }
      }
    }
    long sum=0;
    for(int i=1;i<=8;i++){
      sum+=arr[i];
    }
    cout << sum << endl;
  }
}
