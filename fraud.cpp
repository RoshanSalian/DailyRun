//https://www.hackerrank.com/challenges/fraudulent-activity-notifications/problem
#include<bits/stdc++.h>
using namespace std;

// long find(long arr[], long start, long end, long d){
//   for(int i=start;i<end;i++){
//     //count[arr[i]]+=1;
//     long index = (int)arr[i];
//     count[index]++;
//   }
//   for(int i=0;i<10;i++){cout << count[i]<<" ";}cout << endl;
//   return 0;
// }


int main(){//Few Fail 3/8
  long n, d;
  cin >> n >> d;
  long min, max;
  min = INT_MAX;
  max=INT_MIN;
  long arr[n+3]={0};
  long count[202]={0};
  for(long i=0;i<n;i++){
    cin >> arr[i];
    if(arr[i]>max){max=arr[i];}
    if(arr[i]<min){min=arr[i];}
    //count[arr[i]]++;
  }
  for(int i=0;i<d;i++){
    count[arr[i]]++;
  }
  long noti=0;
  long med=0;
  for(int i=d;i<n;i++){
    //long med = find(arr, i-d, i-1, d );
    // for(int j=i-d;j<i;j++){
    //   count[arr[j]]++;
    // }
    //cout << "for elem "<<arr[i] <<" :";
    med=0;
    long ex = floor(d/2)+1;
    long pre=0;
    for(int j=0;j<=max;j++){
      pre += count[j];
      if(pre>=ex){med=j;break;}
    }
    //for(int j=0;j<10;j++){cout << count[j]<<" ";}cout << endl;
    //cout<<"Med: "<<med<<endl;
    count[arr[i-d]]--;
    count[arr[i]]++;
    //for(int i=0;i<10;i++){cout << count[i]<<" ";}cout << endl;
    //
    if(arr[i]>=2*med){noti++;}
  }
  cout << noti<<endl;
}
