#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n=0;
  cin >> n;
  long long arr[100001], counter[100001]={0};
  for(int i=0;i<n;i++){
    cin >> arr[i];
    counter[i]=0;
  }
  long long count=0;
  //Forward
  for(int i=0;i<n;i++){
    if(i==0 && arr[i]>arr[i+1]){
      counter[i]=1;
    }
    if(arr[i]>arr[i-1]){
      counter[i] = counter[i-1]+1;
    }
  }

  // for(int i=0;i<n;i++){
  //   cout << counter[i] << " ";
  // }
  // cout << endl;

  //Backward
  for(int i=(n-1);i>=0;i--){
    if(arr[i-1]>arr[i] && counter[i-1]<=counter[i]){
      counter[i-1] = counter[i]+1;
    }
  }
  count =0;
  for(int i=0;i<n;i++){
    //cout << counter[i] << " ";
    count += (counter[i]+1);
  }
  cout << count << endl;
}
