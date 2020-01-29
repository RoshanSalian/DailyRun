#include<bits/stdc++.h>
using namespace std;
int main(){
  long a,b;
  cin >> a >> b;
  if(a==b || b==a+1 || (a==9&&b==1)  ){
    if(a==b){
      cout << a << "1 " <<b<<"2"<<endl;
    }
    else if(b==a+1){
      cout << a << "9 " <<b<<"0"<<endl;
    }
    else if(a==9 && b==1){
      cout << a << "9 " <<b<<"00"<<endl;
    }
    else{

    }

  }
  else{
    cout << -1 << endl;
  }
}
