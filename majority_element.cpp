//https://practice.geeksforgeeks.org/problems/majority-element/0/?track=md-arrays&batchId=144

#include<bits/stdc++.h>

using namespace std;

int main(){
  long t, n;
  cin >> t;

  while(t--){
    int arr[1000004]={0};
    cin >> n;
    long long max = -1;
    for(int i=0;i<n;i++){
      long x;
      cin >> x;
      arr[x]++;
      if(x>max){max=x;}
    }
    int flag = 0;
    long idr=-1;
    //sort(arr, arr+n);
    long maxi=-1;
    long elem=-1;
    for(int i=0;i<=max;i++){
      if(arr[i]>maxi){maxi=arr[i];elem=i;}
    }
    if(maxi>n/2){cout << elem <<endl;}
    else{cout << "-1\n";}

    //cout << idr <<endl;
  }

}
