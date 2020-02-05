#include<bits/stdc++.h>
using namespace std;
int main(){ //AC
  long long t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    long long a[n], sum=0, isOdd=-1, count=0, isEven=-1;
    for(int i=0;i<n;i++){
      cin >> a[i];
      sum+=a[i];
      if(a[i]%2){
        isOdd = a[i];
      }
      else{
        isEven = a[i];
      }
    }
    if(sum%2){
      cout << "YES" << endl;
    }
    else{
      //Even sum
      if(isOdd==-1){
        cout << "NO" << endl;
      }
      else{
        if(isEven!=-1)
        cout << "YES" << endl;
        else
        cout<< "NO" << endl;
      }
    }


  }
}
