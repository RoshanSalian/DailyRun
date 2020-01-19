#include<bits/stdc++.h>
using namespace std;

int main(){
  long n;
  cin >> n;
  long hasd[n];
  for(int i=0;i<n;i++){
    cin >> hasd[i];
  }
  long mini=0;
  long t1[n];
  t1[0]=hasd[0];
  t1[1]=hasd[1]+t1[0];
  t1[2]=hasd[2]+t1[0];
  for(int i=3;i<n;i++){
    t1[i] = hasd[i] + min(t1[i-1], t1[i-2]);
  }
  mini = min(t1[n-1], t1[n-2]);
  t1[0]=hasd[0];
  t1[1]=hasd[1];
  for(int i=2;i<n;i++){
    t1[i] = hasd[i] + min(t1[i-1], t1[i-2]);
    // cout << i << " " << t1[i]<<endl;
  }
  if(mini < t1[n-1] ){
    cout << mini<<endl;
  }
  else{
    cout << t1[n-1] <<endl;
  }
}
