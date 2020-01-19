//https://www.hackerrank.com/challenges/equality-in-a-array/problem
//5
#include<bits/stdc++.h>

using namespace std;

int main(){
  int arr[200]={0};
  long n;
  cin >> n;
  long lat=0;
  for(int i=0;i<n;i++){
    long x;
    cin >> x;
    arr[x]++;
    if(lat<x){lat=x;}
  }

  //for(int i=0;i<lat;i++){cout << arr[i] << " ";}cout<<endl;
  long max=0;
  long index=-1;
  for(int i=0;i<lat;i++){
    if(arr[i]>max){
      max = arr[i];
      index = i;
    }
  }
  //cout << max<<endl;
  cout << n - max;
}
