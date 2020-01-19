#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    long n, k;
    cin >> n >> k;  
    int arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr, arr+n);
    long sum=0;
    for(int i=0;i<k;i++){
      sum+=arr[i];
      //cout << arr[i] << " " << i << " " << k << endl;;
    }
    cout << sum << endl;
  }
}
