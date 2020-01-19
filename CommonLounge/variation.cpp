#include<bits/stdc++.h>
using namespace std;
int main(){
  long n, k;
  cin >> n >> k;

  long arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  sort(arr, arr+n);

  // for(auto u:arr){
  //   cout << u << " ";
  // }
  // cout << endl;

  long sum=0;
  for(int i=0;i<n;i++){
    long j=i+1;
    while(arr[j]<arr[i]+k){
      j++;
    }
    sum+=n-j;
  }
  cout << sum <<endl;
  // cout << n*(n-1)/2<<endl;;
}
