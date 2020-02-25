#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n, q;
    cin >> n >> q;
    long arr[n+1]={0}, arr2[n+1]={0};

    for(int i=0;i<q;i++){
      long a, b, c;
      cin >> a>> b >> c;
      if(c==1)
      for(int j=a;j<=b;j++){
        arr[j]++;
      }
    }
    for(int i=1;i<=n;i++){
      //cout << arr[i] << " ";
      if(arr[i]%2==0 && arr[i] > 0){
        arr2[i]=1;
      }
      cout << arr2[i] <<" ";
    }
  }
}
