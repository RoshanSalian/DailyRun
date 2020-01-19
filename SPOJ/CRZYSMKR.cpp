#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    unsigned long long int n;
    cin >> n;
    long bas=34%11;
    long po = n%11;
    long expo = (pow(bas, po));
    expo %= 11;
    // cout <<  "Expo " << expo <<endl;
    long mul = ( (30%11) * (po%11) )%11;
    // cout <<  "MUl " << mul <<endl;
    long late = 32%11;
    // cout <<  "Late " << late <<endl;
    long sum = expo+mul+late;
    long tor = ceil((float)sum/11)*11 - sum;
    cout << tor<<endl;


    // cout << ( (expo%11) + mul%11 )%11 <<endl;



  }
}
