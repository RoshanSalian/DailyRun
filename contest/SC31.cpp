#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    bitset<10> map[n];
    for(int i=0;i<n;i++){
      cin >> map[i];
    }
    bitset<10>temp;
    for(int i=0;i<n-1;i++){
      temp = map[i+1] ^= map[i] ;
      map[i] &= temp;
      map[i+1] &= temp;
      map[i+1] |= map[i];
    }
    cout << map[n-1].count()<<endl;
  }
}
