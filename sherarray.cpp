//https://www.hackerrank.com/challenges/sherlock-and-array/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    long arr[n+1];
    long sum[n+1]={0};
    // cin >> arr[0];
    // sum[0] = arr[0];
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      sum[i]=sum[i-1]+arr[i];
    }
    //for(int i=1;i<=n;i++){cout << sum[i] << " ";}cout<<endl;
    int flag=0;
    if(n==1){
      //cout<<arr[0]<<endl;
      flag=1;
    }
    else
    for(int i=1;i<=n;i++){
      //cout << "Comparing" << sum[i-1] << " " << (sum[n-1]-sum[i])<<endl;
      if(sum[i-1]==(sum[n]-sum[i])){flag=1;break;}
    }
    if(flag){cout<<"YES"<<endl;}
    else{cout << "NO"<<endl;}
  }
}
