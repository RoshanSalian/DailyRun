//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0/?track=md-arrays&batchId=144
#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    long stop[3]={0};
    for(int i=0;i<n;i++){
      long x;
      cin >>x;
      stop[x]++;
    }
    while(stop[0]){cout << 0 << " ";stop[0]--;}
    while(stop[1]){cout << 1 << " ";stop[1]--;}
    while(stop[2]){cout << 2 << " ";stop[2]--;}
    cout << endl;
  }
}
