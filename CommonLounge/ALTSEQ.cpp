#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;

  long a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  long lis[n]={0};
  lis[0]=1;
  for(int i=1;i<n;i++){
    lis[i]=1;
    for(int j=0;j<i;j++){
      if(a[i]>a[j] && lis[i] < lis[j]+1){
        lis[i] = lis[j]+1;
      }
    }
  }
  for (auto u:lis){cout << u << " ";}cout << endl;
  return *max_element(lis, lis+n);

}
