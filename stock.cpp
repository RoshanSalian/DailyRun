//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0
#include<bits/stdc++.h>
using namespace std;
int main(){//https://www.geeksforgeeks.org/stock-buy-sell/
  long t;
  cin >> t;
  while(t--){
    long n;
    vector<long>break_point;
    break_point.push_back(0);
    cin >> n;
    long arr[n+1]={0};
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      if(arr[i]<arr[i-1]){
        break_point.push_back(i-2);
      }
    }
    long min = INT_MAX;
    long index=-1;
    for(int i=1;i<break_point.size();i++){
      //cout << break_point[i] << endl;
      min=INT_MAX;
      index=-1;
      for(int j=break_point[i]-1;j>=0 && j>=break_point[i-1];j--){
        if(arr[j]<min){
          min = arr[j];
          index= j;
        }
      }
      cout << "(" << index <<" " << break_point[i]+1 <<")";
    }

    // for(int i=n;i>=break_point[break_point.size()-1];i--){
    //   if(arr[j]<min){
    //     min = arr[j];
    //     index= j;
    //   }
    // }
    // cout << "(" << index <<" " << break_point[i]+1 <<")";



  }
}
