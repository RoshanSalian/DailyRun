#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  long long arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  long a=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      arr[a++]=arr[i];
    }
  }
  for(a;a<n;a++){
    arr[a]=0;
  }
  for(auto u:arr){
    cout << u<<" ";
  }
}
