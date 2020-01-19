//https://www.codechef.com/problems/RIT02
#include<bits/stdc++.h>
using namespace std;
long find_min(long arr[], long n){
  long min = INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]>=1)
    if(arr[i]<min){min= arr[i];}
  }
  return min;
}
int main(){//Cant understand question
  long n;
  cin >> n;
  long arr[n];
  long temp[100004]={0};
  long min=INT_MAX;
  long max=INT_MIN;
  long sum=0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    sum+=arr[i];
  }
  long grand=0;
  //for(int i=0;i<5;i++){
  while(sum>0){
    min = find_min(arr, n);
    //cout << min << endl;
    sum-=min;
    grand=0;
    for(int i=0;i<n;i++){
      if((arr[i]-min)>=1){grand++;}
      arr[i]-=min;
    }
    cout << grand*min<<endl;
  }
}
