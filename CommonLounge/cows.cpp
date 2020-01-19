#include<bits/stdc++.h>
using namespace std;

int check(long mid, long arr[], long n, long cow){
  // cout << mid << " Starting" << endl;
  long last=arr[0];
  long count=1;
  for(int i=1;i<n;i++){
    // cout << "Comapring " << arr[i] << " " << last<<endl;
    if( (arr[i]-last) >=mid){
      // cout << "Insdie " << i <<endl;
      count++;
      last=arr[i];
    }
  }
  if(count>=cow){
    return 1;
  }
  else{
    return 0;
  }
}


int main(){
  long t;
  cin >> t;
  while(t--){
    long n, c;
    cin >> n >> c;
    long arr[n];
    for(int i=0;i<n;i++)cin >> arr[i];

    sort(arr, arr+n);

    long pos=0;
    long high=1000000;
    long low=0;
    while(high>=low){
      long mid = (high+low)/2;
      if(check(mid, arr, n, c)){
        low=mid+1;
        pos = mid;
      }
      else{
        high=mid-1;
      }
    }
    cout << pos <<endl;;
  }
}
