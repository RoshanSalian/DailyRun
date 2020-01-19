//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0/?track=md-arrays&batchId=144
#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    long n, sum;
    cin >> n >> sum;
    long arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    long start,end;
    start=0;
    end=0;
    long present=0;
    while(start<=end &&  present!=sum && start<n){
      if(present<sum){
        present += arr[end];
        end++;
      }
      else{
        present -= arr[start];
        start++;
      }
      cout << start << " " << end <<" " << present <<endl;
    }
    if(present==sum){cout<<start+1<<" "<<end<<endl;}
    else{cout << -1 << endl;}
  }
}
