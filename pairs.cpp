//https://www.hackerrank.com/challenges/pairs/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  long k;
  vector<long> arr;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    long x;
    cin >> x;
    arr.push_back(x);
  }
  long count=0;
  sort(arr.begin(), arr.end());
  for(int i=0;i<n;i++){
    long j=1;
    while(abs(arr[i]-arr[i+j]) <= k){//simplify
      //cout << "comparing :" << arr[i] << " " << arr[i+j] << endl;
      if(abs(arr[i]-arr[i+j])==k){
          count++;
          break;
      }

      j++;
    }
  }
  cout << count;
}
