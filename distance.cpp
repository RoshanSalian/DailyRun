//https://www.codechef.com/problems/CHKDST
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){//Understand and decode and fix. Leaving it for now

  int n,x,q;
  cin>>n>>q;
  int a[n+1],b[n+1],mod=7630367;
  for(int i=0;i!=n;i++){
    cin>>x;
    a[x]++;b[x]++;
  }
  ll upd=0;
  for(int i=0;i!=n+1;i++){
    upd=a[i]%mod;
    a[i]=(a[i-1]+upd)%mod;
  }

  upd=0;
  for(int i=n;i>=0;i--){
    upd=b[i]%mod;
    b[i]=(b[i+1]+upd)%mod;
  }

  while(q--){
    cin>>x;
    printf("%lld",(a[x]+b[x])%mod);
  }
}
