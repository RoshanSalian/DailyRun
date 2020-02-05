#include<bits/stdc++.h>
using namespace std;
int main(){//AC
  long long t;
  cin >> t;
  while(t--){
      long long n, sum=0;
      cin >> n;
      long long rem;
      while(n>=10){
        rem = n%10;
        n -= rem;
        sum+=n;
        n = (rem+floor(n/10));
      }
      if(n<10){
        sum += n;
      }
      cout << sum << endl;
  }
}
