//https://www.geeksforgeeks.org/find-maximum-average-subarray-of-k-length/
#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  long arr[n+2]={0};
  long sum[n+1]={0};
  for(int i=1;i<=n;i++){
    cin >> arr[i];
    sum[i] = sum[i-1]+arr[i];
  }
  long max=INT_MIN;
  long index = -1;
  for(int i=4;i<=n;i++){
    //cout << (sum[i]-sum[i-4]) << endl;
    if (((sum[i]-sum[i-4])/4) >max){
      max=((sum[i]-sum[i-4])/4);
      index = i-3;
      //cout << max << endl;
    }
  }
  cout << max<<"@" << index;
}
