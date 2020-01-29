#include<bits/stdc++.h>
using namespace std;
int main(){//WA
  long n, k;
  cin >> n >> k;
  long a[n];
  long temp[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  long i = k-1;
  long sum=0;
  while(i<n){
    if(i==n-1)break;
    //cout << i <<" " << sum ;
    if( (i+2) < n){
      //cout << "if"<<endl;
      //sum += (a[i+1]>a[i+2])?(a[i+1], i++):(a[i+2], i+=2);
      if(a[i+1]>a[i+2]){
        sum+=a[i+1];
        i++;
      }
      else{
        sum+=a[i+2];
        i+=2;
      }
    }
    else if(sum<sum+a[i+1]){ //cout << "elsif"<<endl;
      sum+=a[i+1];
      i++;
      break;
    }
    else{//cout << "else"<<endl;
      break;
    }
  }
  //cout << "Mid: " << sum << endl;
  while(i>=0){
    // cout << i << "\n";
    if(i==0) break;
    if( (i-2) >= 0){
      //sum += (a[i-1]>a[i-2])?(a[i-1], i--):(a[i+2], i-=2);
      if(a[i-1]>=a[i-2]){
        sum+=a[i-1];
        i--;
      }
      else{
        sum+=a[i-2];
        i-=2;
      }
    }
    else if(sum<sum+a[i-1]){
      sum+=a[i-1];
      i--;
      break;
    }
    else{
      break;
    }
  }

  cout << sum <<endl;

}
