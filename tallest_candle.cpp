//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
//3

#include<bits/stdc++.h>

using namespace std;

int main(){
  long n;
  cin >> n;
  long arr[100008]={0};
  long max=-1;
  for(int i=0;i<n;i++){
    long x;
    cin >> x;
    arr[i]=x;
    if(x>max)max=x;
  }
  long count =0;
  for(int i=0;i<n;i++){
    if(arr[i] == max)count++;
  }
  cout << count;
}
