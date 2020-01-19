#include<bits/stdc++.h>
using namespace std;
long arr[100000];
void init(long n){
  for(int i=1;i<=n;i++){
    arr[i]=i;
  }
}

int root(int i){
    while(arr[ i ] != i){
     arr[i] = arr[arr[ i ]];
     i=arr[i];
    }
    return i;
}

void union1(long a, long b){
  int root_A = root(a);
  int root_B = root(b);
  // arr[ root_A ] = root_B ;
  if(root_A<root_B){
    arr[root_B] = root_A;
  }
  else{
    arr[root_A] = root_B;
  }
}

int main(){
  long t;
  cin >> t;
  long n, m;
  cin >> n >> m;
  long cost[n+1]={0};
  for(int i=1;i<=n;i++){
    cin >> cost[i];
  }
  init(n);
  for(int i=0;i<m;i++){
    long a, b;
    cin >> a>>b;
    union1(a, b);
  }

  for(int i=1;i<=n;i++){
    cout << root(arr[i]) << " ";
  }

  

}
