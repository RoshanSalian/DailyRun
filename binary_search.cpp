#include<bits/stdc++.h>

using namespace std;

int bin(long arr[], long x, long n){
  long start=0;
  long end=n-1;
  long mid=0;
  while(start<=end){
    mid=(start+end)/2;
    //cout << start<< " " << mid <<" "<< end <<" "<<endl;
    if(arr[mid]==x){return mid;}
    else{
      if(x<arr[mid]){end=mid-1;}
      else{start=mid+1;}
    }
  }
  return -1;
}

int main(){
  long n;
  cin >> n;
  long arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  long x;
  cin >> x;
  long i = bin(arr, x, n);
  if(i!=-1){cout<<"Found at :" << i;}
  else{cout << "Not Found";}
}
