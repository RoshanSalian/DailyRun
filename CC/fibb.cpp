#include<bits/stdc++.h>
using namespace std;

void init(int arr[], int n){
  long count=0;
  long a , b, c;
  a = 0;
  b=1;
  arr[0]=1;
  for(int i=1;i<n;i++){
    c = a+b;
    a=b;
    b=c;
    // cout << b <<" ";
    if(i%2==0){
      arr[i/2]=b%10;
    }
  }
}

void trim(int arr[], int n){
  for(int i=0;i<n/2;i++){
    if( (2*i+1) < n)
    arr[i] = arr[2*i+1];
  }
}

int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;

    if(n==1){
      cout << 0 <<endl;
    }
    else{

      int arr[n+1]={0};
      init(arr, n+1);

      // for(int i=0;i<n/2;i++){
      //   cout << arr[i] << " ";
      // }
      // cout << endl;
      n/=2;

      while(n>1){

        trim(arr, n);
        n/=2;
        // for(int i=0;i<n;i++){
        //   cout << arr[i] << " ";
        // }
        // cout << endl;
      }
      cout << arr[0]<<endl;;
    }

  }
}
