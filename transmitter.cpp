//https://www.hackerrank.com/challenges/hackerland-radio-transmitters/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
  long n, k;
  cin >> n >> k;
  long arr[1100004]={0};
  long max=-1;
  for(long i=0;i<n;i++){
    long x;
    cin >> x;
    if(max<x){max=x;}
    arr[x]=1;
  }
  //sort(arr, arr+n);
  // for(int i=0;i<=max;i++){
  //   cout << arr[i] <<" ";
  // }
  //check
  long compo=0;
  for(long i=0;i<=max;i++){
    //cout << "i@" << i <<endl;
    if(arr[i]){//not necessarily the middle of window has a house
      //cout << "hosue@" << i <<endl;
      for(long j=i+k;j>=i;j--){
        if(arr[j]){
          i=j+k;
          //cout << "placement@" << j <<endl;
          break;
        }
      }

      compo++;
      //i+=(k);
    }

  }
  cout << compo <<endl;
}
