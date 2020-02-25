#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    long long a[n], s[n]={0};
    for(int i=1;i<=n;i++){
      cin >> a[i];
      if(i==1){
        s[i]=a[i];
      }
      else{
        s[i] = s[i-1]+a[i];
      }
    }

    // for(int i=1;i<n;i++)cout << a[i] <<" ";
    // cout << endl;

    for(int i=0;i<=n;i++)cout << s[i] <<" ";
    cout << endl;
  }
}
