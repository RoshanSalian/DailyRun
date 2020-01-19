#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  long sum=0;
  long summ=0;
  long index=0;
  long counter, count, prev_i;
  counter=0;
  count=0;
  prev_i=0;
  for(int i=0;i<n;i++){
    long x;
    cin >> x;
    if(x==1){
      sum++;
      counter++;
    }
    if(x==2){
      sum--;
      counter++;
    }
    if(sum>summ){
        summ=sum;
        index=i;
    }
    if(sum==0){
      if(counter>count){ //cout << "*" <<i << endl;
        count=counter;
        prev_i=i;

      }
      counter=0;
      // prev_i=i;
    }
  }
  cout << summ << " " << index+1 << " " << count << " "<<prev_i - 1 - count/2 <<endl;
}
