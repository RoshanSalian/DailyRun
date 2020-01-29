#include<bits/stdc++.h>
using namespace std;
int main(){
  long n, p, m=0;
  cin >> n >> p;

  long temp = abs(p);

  while(temp>=2){
    long rem = floor(log(temp)/log(2));
    cout << "Rem :"<<rem<<endl;
    m += pow(2, rem);
    cout << "M: " << m << endl;
    temp-=pow(2, rem);
  }
  p=temp;
  // cout << "P: "<<temp <<endl;

  while(n){
    n=n-p+m;
    long divi = floor(log(n)/log(2));
    cout << "N before: " << n << " Div: " << divi<<endl;
    n = n - pow(2, divi);
    cout << "N left: " << n<<endl;
  }
}
