//https://practice.geeksforgeeks.org/problems/equilibrium-point/0/?track=md-arrays&batchId=144
#include<bits/stdc++.h>

using namespace std;

int main(){
  long t, n;
  cin >> t ;
  while(t--){
    cin >> n;
    long index=-1;
    long long elem[n+1]={0};
    long long sum[n+1]={0};
    for(int i=0;i<n;i++){
      cin >> elem[i];
      if(i==0){sum[i]=elem[i];}
      else{sum[i]=sum[i-1]+elem[i];}
    }
    for(int i=0;i<n;i++){cout << sum[i] << " ";}cout<<endl;
    if(n==1){cout<<1<<endl;}
    else{
      for(int i=1;i<n;i++){
        if(sum[i-1] == sum[n-1]-sum[i]){
            index=i;
            break;
        }
      }
      if(index!=-1)
      cout << (index+1)<<endl;
      else cout<<-1<<endl;
    }

  }
}
