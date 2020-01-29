#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n, a=0, b=0;
    cin >> n;
    for(int i=0;i<n;i++){
      long x;
      cin >> x;
      if(x==0){
        a++;
      }
      else if(x==2){
        b++;
      }
      else{

      }
    }

    long sum1 = a*(a-1)*0.5;
    long sum2 = b*(b-1)*0.5;
    cout << sum1+sum2<<endl;


  }
}
