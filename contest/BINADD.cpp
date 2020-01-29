#include<bits/stdc++.h>
using namespace std;

unsigned long long int inter(string binaryString){
  unsigned long long int value = 0;
  long long indexCounter = 0;
  for(long long i=binaryString.length()-1;i>=0;i--){

      if(binaryString[i]=='1'){
          value += pow(2, indexCounter);
      }
      indexCounter++;
  }
  return value;
}

int main(){
  long t;
  cin >> t;
  while(t--){
    string a, b;
    cin >> a >> b;
    unsigned long long int a1 = 0;
    a1 |= inter(a);
    unsigned long long int a2 = 0;
    a2 |= inter(b);

    // cout << a1 << " " << a2 << endl;

    long long counter=0;

    while(a2!=0){
      unsigned long long int ta1 = a1 ^ a2;
      unsigned long long int temp = (a1&a2)*2;
      // unsigned long long ta2 = temp*2;
      a1 = ta1;
      a2 = temp;
      // cout << a1 << " " << temp<<" " << a2 <<  " Counter: " << counter <<endl;
      counter++;
    }
    cout << counter << endl;
  }
}
