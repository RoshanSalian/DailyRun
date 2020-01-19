//https://www.hackerrank.com/challenges/lilys-homework/problem
#include<bits/stdc++.h>
using namespace std;
int main(){//Fail
  long n;
  cin >> n;
  long arr[n+1];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  long min=INT_MAX;
  long index=-1;
  long count=0;
  for(int i=0;i<n;i++){
    min=arr[i];
    index=-1;
    for(int j=i+1;j<n;j++){
      if(arr[j] < min){index = j;}
    }
    //cout << "f"<<endl;//if not swapped
    if(index!=-1){
      swap(arr[i], arr[index]);
      cout << arr[i] << " " << arr[index]<<endl;
      count++;
    }

  }
  cout << count;
}
