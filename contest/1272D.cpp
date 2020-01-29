#include<bits/stdc++.h>
using namespace std;
int main(){ // WA, cant come up with delete only once from array
  long n;
  cin >> n;
  long arr[n];
  long arr1[n]={0};
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  long super=1;
  long maxi=0;
  for(int i=0;i<n;i++){

    if((i-2) >=0){ //cout << "if ";
      if( arr[i-1]<arr[i] && arr[i-2]<arr[i] && super ){
        if(arr1[i-1]>arr1[i-2]){
          arr1[i]=arr1[i-1]+1;
        }
        else{
          arr1[i]=arr1[i-2]+1;
          super=0;
        }
      }
        // arr1[i]=max(arr1[i-1]+1, arr1[i-2]+1);
      else if (arr[i-1]<arr[i])
        arr1[i]=arr1[i-1]+1;
      else if (arr[i-2]<arr[i] && super){
        arr1[i]=arr1[i-2]+1;
        super=0;
      }
      else{
        arr1[i]=1;
      }
    }
    else if((i-1) >=0){ //cout << "elif ";
      if(arr[i-1]<arr[i])
        arr1[i]=arr1[i-1]+1;
      else
        arr1[i]=1;
    }
    else{ //cout << "else ";
      arr1[i]=1;
    }

    // cout << arr1[i]<<endl;
    if(maxi<arr1[i])maxi=arr1[i];
  }
  cout << maxi<<endl;

}
