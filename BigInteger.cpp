//7
//https://www.hackerrank.com/challenges/extra-long-factorials/forum
#include<bits/stdc++.h>

using namespace std;

void mul(int digit[], int m, int limit){
  for(int i=0;i<=limit;i++){
    int q = digit[i]*m;
    while(q){
      int unit = q%10;
      //Incomplete
    }
  }
}

int digit[200];
int main(){

  int n, limit=1;

  if(n==0 || n==1){cout << 1;}
  else{
    digit[0]=1;
    for(int i=2;i<=n;i++){
      mult(digit, i, limit);
    }
  }

}
