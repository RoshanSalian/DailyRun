//4
//https://www.codechef.com/JULY19B/problems/CHFM

#include<bits/stdc++.h>

using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    long long n, sum=0, flag=0, index=-1;
    cin >> n;
    long long coin[n];
    for(int i=0;i<n;i++){
      long long x;
      cin >> x;
      sum+=x;
      coin[i]=x;
    }
    if( sum%n == 0 ){
      long long mean = sum/n;

      for(int i=0;i<n;i++){
        if(coin[i]==mean){flag=1;index=i+1;break;}
      }
    }

    if(flag){cout << index<<endl;}
    else{cout << "Impossible"<<endl;}
  }
}
