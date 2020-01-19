#include<bits/stdc++.h>
using namespace std;

long count_case(long n, long ex){
  long cas=0;
  for(long i=0;i<=ex/2;i++){
    if(abs(i - (ex-i)) < n){cas+=2;}
    else{cas++;}
  }
  //cout << cas << " *\n";
  if(ex%2==0)cas--;
  return cas;
}

int main(){
  long t;
  cin >> t;
  long flag=0;
  long num=0;
  while(t--){
    long st, in, ex;
     num=0;
     flag=0;
    cin >> st >> in >>ex;
    if(ex>0){
      if(st>in){
        //num = (ex+2)/2;
        num = count_case(st-in, ex);
      }
      else{
        ex -= abs(st-in)+1; //cout << "* " << ex << endl;
        if(ex==0){num=1;}
        else if(ex<0){flag=-1;}
        else{num = count_case( st+abs(st-in)+1-in ,ex); }
      }
    }
    else{//ex=0
      if(st<=in){num=0;}
      else{
        num=1;
      }
    }
    if(flag!=-1)
    cout << num <<endl;
    else
    cout << 0 << endl;
  }
}


// int(ceil((s+e-i)/2))
