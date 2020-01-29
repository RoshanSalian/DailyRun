#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long a, b, c;
    cin >> a >> b >> c;
    long dis = abs(a-b)+abs(a-c)+abs(c-b);
    if(dis<=4){
      cout << 0 << endl;
    }
    else{
      cout << dis-4 <<endl;
    }
  }
}
